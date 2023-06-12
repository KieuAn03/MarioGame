#include "KoopaTroopa.h"
void KoopaTroopa::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{

	if (state == TROOPA_STATE_DIE)
	{
		left = x - TROOPA_BBOX_WIDTH / 2;
		top = y - TROOPA_BBOX_HEIGHT_DIE / 2;
		right = left + TROOPA_BBOX_WIDTH;
		bottom = top + TROOPA_BBOX_HEIGHT_DIE;
	}
	else
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
	if (this->head->GetOy() > this->y) {
		vx = -vx;
		this->head->Setvx(vx);
		if (vx < 0) {
			this->head->SetPosition(x - 16, y);

		}
		else {
			this->head->SetPosition(x + 16, y);

		}
	}
	if ((state == TROOPA_STATE_DIE) && (GetTickCount64() - die_start > TROOPA_DIE_TIMEOUT))
	{
		isDeleted = true;
		return;
	}
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	head->Update(dt,coObjects);

	


}

void KoopaTroopa::Render()
{
	int aniId = ID_ANI_TROOPA_WALKING;
	if (state == TROOPA_STATE_DIE)
	{
		aniId = ID_ANI_TROOPA_DIE;
	}
	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	RenderBoundingBox();

	head->RenderBoundingBox();
}

void KoopaTroopa::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void KoopaTroopa::OnCollisionWith(LPCOLLISIONEVENT e)
{
	if (!e->obj->IsBlocking()) return;
	if (dynamic_cast<KoopaTroopa*>(e->obj)) return;

	if (e->ny != 0)
	{
		vy = 0;
	}
	else if (e->nx != 0)
	{
		vx = -vx;
		this->head->Setvx(vx);
		if (vx < 0) {
			this->head->SetPosition(x - 16, y);
			
		}
		else {
			this->head->SetPosition(x + 16, y);
			
		}
		
	}
}

KoopaTroopa::KoopaTroopa(float x, float y)
{
	
	this->ax = 0;
	this->ay = TROOPA_GRAVITY;
	die_start = -1;
	SetState(TROOPA_STATE_WALKING);
	this->head = new KoopaHead(10,172 );
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
		break;
	case TROOPA_STATE_WALKING:
		vx = -TROOPA_WALKING_SPEED;
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
	int aniId = ID_ANI_TROOPA_WALKING;
	if (state == TROOPA_STATE_DIE)
	{
		aniId = ID_ANI_TROOPA_DIE;
	}
	OutputDebugStringW(L"KoopaHeadRender!.");

	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	RenderBoundingBox();
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
