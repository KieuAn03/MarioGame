#include "KoopaTroopa.h"
#include "Mario.h"
#include "PlayScene.h"



void KoopaTroopa::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{

	if (state == TROOPA_STATE_DIE)
	{
		left = x - TROOPA_BBOX_WIDTH / 2;
		top = y - TROOPA_BBOX_HEIGHT_DIE / 2;
		right = left + TROOPA_BBOX_WIDTH;
		bottom = top + TROOPA_BBOX_HEIGHT_DIE;
	}
	else if (state == TROOPA_STATE_REVIE)
	{
		left = x - TROOPA_BBOX_WIDTH / 2;
		top = y - TROOPA_BBOX_HEIGHT_DIE / 2;
		right = left + TROOPA_BBOX_WIDTH;
		bottom = top + (TROOPA_BBOX_HEIGHT_DIE);
	}
	else if (state == TROOPA_STATE_SPINNING) {
		left = x - TROOPA_BBOX_WIDTH / 2;
		top = y - TROOPA_BBOX_HEIGHT_DIE / 2;
		right = left + TROOPA_BBOX_WIDTH;
		bottom = top + (TROOPA_BBOX_HEIGHT_DIE - 3);
	}else
	{
		left = x - TROOPA_BBOX_WIDTH / 2;
		top = y - TROOPA_BBOX_HEIGHT / 2;
		right = left + TROOPA_BBOX_WIDTH;
		bottom = top + TROOPA_BBOX_HEIGHT;
	}
}

void KoopaTroopa::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	
	vy += ay * dt;
	vx += ax * dt;
	if (this->head != nullptr) {
		if (this->head->GetOy() > this->y) {
			vx = -vx;
			this->head->Setvx(vx);
			if (vx < 0) {
				this->Direction = ID_ANI_TROOPA_WALKINGL;
				this->head->SetPosition(x - 16, y);

			}
			else {
				this->Direction = ID_ANI_TROOPA_WALKINGR;
				this->head->SetPosition(x + 16, y);

			}
		}
	}
	
	if ((state == TROOPA_STATE_DIE) && (GetTickCount64() - die_start <TROOPA_DIE_TIMEOUT)) {
		CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
		
		if (followMario == true) {
			ay = 0;
			
			if (mario->direction == 1) {
				mario->GetPosition(this->x, this->y);
				this->x += 8;
			}
			else if (mario->direction == 0) {
				mario->GetPosition(this->x, this->y);
				this->x -= 8;
			}
			if (mario->handsth == false) {
				followMario = false;
				this->SetState(TROOPA_STATE_SPINNING);
			}
		}
	}
	
	if ((state == TROOPA_STATE_DIE) && (GetTickCount64() - die_start > TROOPA_DIE_TIMEOUT))
	{
		CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();

		
		revie_start = GetTickCount64();
		vx = 0.06f;
		SetState(TROOPA_STATE_REVIE);
		

	}

	if ((state == TROOPA_STATE_REVIE))

	{
		CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();

		if (followMario == true) {
				ay = 0;
				
				if (mario->GetState() == MARIO_STATE_RUNNING_RIGHT) {
					mario->GetPosition(this->x, this->y);
					this->x += 8;
				}
				if (mario->GetState() == MARIO_STATE_RUNNING_LEFT) {
					mario->GetPosition(this->x, this->y);
					this->x -= 8;
				}
				if (mario->handsth == false) {
					followMario = false;
					this->SetState(TROOPA_STATE_SPINNING);
					
				}
		}
		vx = -vx;
		if ((GetTickCount64() - revie_start >= TROOPA_REVIE_TIMEOUT)) {

			y = head->GetOy();
			this->ay = TROOPA_GRAVITY;
			this->head->ay = TROOPA_GRAVITY;
			if (Direction == ID_ANI_TROOPA_WALKINGL) {
				vx = -TROOPA_WALKING_SPEED;
				this->head->Setvx(-TROOPA_WALKING_SPEED);
				head->Setx(this->x - 16);
			}
			else {
				vx = TROOPA_WALKING_SPEED;
				this->head->Setvx(TROOPA_WALKING_SPEED);
				head->Setx(this->x + 16);
			}
			
			die_start = -1;
			revie_start = -1;
			
			SetState( TROOPA_STATE_WALKING);
			followMario = false;
		}

	}
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	if (this->head != nullptr) {
		head->Update(dt, coObjects);
	}

}

void KoopaTroopa::Render()
{
	int aniId = ID_ANI_TROOPA_WALKINGL;
	if (Direction == ID_ANI_TROOPA_WALKINGL) {
		aniId = ID_ANI_TROOPA_WALKINGL;
	}
	if (Direction == ID_ANI_TROOPA_WALKINGR) {
		aniId = ID_ANI_TROOPA_WALKINGR;
	}
	if (state == TROOPA_STATE_DIE)
	{
		aniId = ID_ANI_TROOPA_DIE;
	}
	else if (state == TROOPA_STATE_REVIE) {
		aniId = ID_ANI_TROOPA_REVIE;
	}
	else if (state == TROOPA_STATE_SPINNING) {
		aniId = ID_ANI_TROOPA_SPINNING;
	}
	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	RenderBoundingBox();
	if (this->head != nullptr) {
		head->RenderBoundingBox();
	}
}

void KoopaTroopa::OnCollisionWithGoomba(LPCOLLISIONEVENT e)
{
	CGoomba* goomba = dynamic_cast<CGoomba*>(e->obj);
	// jump on top >> kill Goomba and deflect a bit 
	
		if (goomba->GetState() != GOOMBA_STATE_DIE)
		{
			goomba->SetState(GOOMBA_STATE_DIE);
		}
}

void KoopaTroopa::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void KoopaTroopa::OnCollisionWith(LPCOLLISIONEVENT e)
{
	
	if (dynamic_cast<KoopaTroopa*>(e->obj)) return;
	if (dynamic_cast<CGoomba*>(e->obj)) {
		if (state == TROOPA_STATE_SPINNING) {
			OnCollisionWithGoomba(e);
		}
		
	}
	if (!e->obj->IsBlocking()) return;
	if (e->ny != 0)
	{
		vy = 0;
	}
	else if (e->nx != 0)
	{
		vx = -vx;
		if (head != nullptr) {
			this->head->Setvx(vx);
			if (vx < 0) {
				this->Direction = ID_ANI_TROOPA_WALKINGL;
				
					this->head->SetPosition(x - 16, y);

			}
			else {
				this->Direction = ID_ANI_TROOPA_WALKINGR;
				
					this->head->SetPosition(x + 16, y);

			}
		}
		
	}
}

KoopaTroopa::KoopaTroopa(float x, float y)
{
	Direction = ID_ANI_TROOPA_WALKINGL;
	this->ax = 0;
	this->ay = TROOPA_GRAVITY;
	die_start = -1;
	SetState(TROOPA_STATE_WALKING);
	this->head = new KoopaHead(10,172);
	this->head->Render();
	this->head->SetPosition(x-16,y);
}

void KoopaTroopa::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case TROOPA_STATE_DIE:
		die_start = GetTickCount64();
		y += (TROOPA_BBOX_HEIGHT - TROOPA_BBOX_HEIGHT_DIE) / 2;
		vx = 0;
		vy = 0;
		ay = 0;
		head->ax = 0;
		head->ay = 0;
		head->Setvx(0);
		break;
	case TROOPA_STATE_REVIE:
	{	
		vx = 0.3f;
		break;
	}
	case TROOPA_STATE_WALKING:
		
		vx = -TROOPA_WALKING_SPEED;
		break;

	case TROOPA_STATE_SPINNING:
		die_start = -1;
		revie_start = -1;
		ay = GOOMBA_GRAVITY;
		vx = -0.4f;
		head->Delete();
		head = nullptr;
		break;
	}
}

void KoopaHead::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - TROOPA_BBOX_WIDTH / 2;
	top = y - TROOPA_BBOX_HEIGHT / 2;
	right = left + TROOPA_BBOX_WIDTH;
	bottom = top + TROOPA_BBOX_HEIGHT;
}

void KoopaHead::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	
}

void KoopaHead::Render()
{
	
}

void KoopaHead::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void KoopaHead::OnCollisionWith(LPCOLLISIONEVENT e)
{
}

void KoopaHead::Setvx(float vx)
{
	this->vx = vx;
}

void KoopaHead::Setx(float x)
{
	this->x = x;
}

float KoopaHead::GetOy()
{
	return this->y;
}

KoopaHead::KoopaHead(float x, float y)
{
	OutputDebugStringW(L"KoopaHeadCreate.");
	this->ax = 0;
	this->ay = TROOPA_GRAVITY;
	die_start = -1;
	SetState(TROOPA_STATE_WALKING);
}

void KoopaHead::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case TROOPA_STATE_DIE:
		die_start = GetTickCount64();
		y += (TROOPA_BBOX_HEIGHT - TROOPA_BBOX_HEIGHT_DIE) / 2;
		vx = 0;
		vy = 0;
		ay = 0;
		break;
	case TROOPA_STATE_WALKING:
		vx = -TROOPA_WALKING_SPEED;
		break;
	}
}
