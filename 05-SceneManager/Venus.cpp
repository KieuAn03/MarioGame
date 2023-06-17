#include "Venus.h"
#include <cmath>
#include "Mario.h"
#include "PlayScene.h"
void CVenusR::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - VENUS_BBOX_WIDTH / 2;
	top = y - VENUS_BBOX_HEIGHT / 2;
	right = left + VENUS_BBOX_WIDTH;
	bottom = top + VENUS_BBOX_HEIGHT;
}
float distance(CMario* mario, float x, float y)
{
	float Mx, My;
	mario->GetPosition(Mx, My);
	return sqrt(pow(Mx - x, 2) + pow(My - y, 2));
}
void CVenusR::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)

{
	
	CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
	
	if (boom != nullptr) {
		if (boom->IsDeleted() == 1) {
			boom = nullptr;
			if (mario->GetLevel() > MARIO_LEVEL_SMALL)
			{
				mario->SetLevel(MARIO_LEVEL_SMALL);
				mario->StartUntouchable();
			}
			else
			{
				DebugOut(L">>> Mario DIE >>> \n");
				mario->SetState(MARIO_STATE_DIE);
			}
		}


	}
	if (distance(mario, this->x, this->y) <200) {
		if(GetState() ==VENUS_STATE_IDLE)
			SetState(VENUS_STATE_GROW);
	}
	if (GetState() == VENUS_STATE_SHRINK && this->y >=this->startOy) {
		SetState(VENUS_STATE_IDLE);
	}
	if (GetState() == VENUS_STATE_GROW && this->y < this->fullGrowOy) {
	
		SetState(VENUS_STATE_FIRE);
		OutputDebugStringW(L"BOOOOMMMM.");
		
	}
	vy += ay * dt;
	vx += ax * dt;
	
	//if ((state == _STATE_DIE) && (GetTickCount64() - die_start > GOOMBA_DIE_TIMEOUT))
	//{
		//isDeleted = true;
		//return;
	//}

	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	if (this->boom != nullptr) {
		CCollision::GetInstance()->Process(boom, dt, coObjects);
	}
}

void CVenusR::Render()
{
	int aniId = ID_ANI_VENUS_GROW;
	/*
	if (state == GOOMBA_STATE_DIE)
	{
		aniId = ID_ANI_GOOMBA_DIE;
	}
	*/
	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	RenderBoundingBox();
	if (this->boom != nullptr) {
		boom->Render();
	}
}

void CVenusR::OnNoCollision(DWORD dt)
{

	x += vx * dt;
	y += vy * dt;
}

void CVenusR::OnCollisionWith(LPCOLLISIONEVENT e)
{
}

CVenusR::CVenusR(float x, float y)
{
	startOy = y;
	fullGrowOy = y - 32;
	this->ax = 0;
	this->ay = 0.001f;
	SetState(VENUS_STATE_IDLE);
}

void CVenusR::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case VENUS_STATE_IDLE:
		vx = 0;
		vy = 0;
		ay = 0;
		break;
	case VENUS_STATE_GROW:
		vy = -0.06f;
		break;
	case VENUS_STATE_FIRE:
	{

		boom = new CBOOM(this->x , y);
		boom->SetPosition(this->x , y);
		CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
		this->boom->genx = this->boom->GetOx();
		this->boom->geny = this->boom->GetOy();
		if (mario != nullptr) {

			mario->GetPosition(boom->Mx, boom->My);
		}
		vy = 0;
		y--;
		SetState(VENUS_STATE_SHRINK);
		break;
	}
	case VENUS_STATE_SHRINK:
		vy = 0.06f;
		break;
	}
}

void CVenusG::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - VENUS_BBOX_WIDTH / 2;
	top = y - VENUS_BBOX_HEIGHT / 2;
	right = left + VENUS_BBOX_WIDTH;
	bottom = top + VENUS_BBOX_HEIGHT;
}

void CVenusG::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();

	if (boom != nullptr) {
		if (boom->IsDeleted() == 1) {
			boom = nullptr;
			if (mario->GetLevel() > MARIO_LEVEL_SMALL)
			{
				mario->SetLevel(MARIO_LEVEL_SMALL);
				mario->StartUntouchable();
			}
			else
			{
				DebugOut(L">>> Mario DIE >>> \n");
				mario->SetState(MARIO_STATE_DIE);
			}
		}


	}
	if (distance(mario, this->x, this->y) < 200) {
		if (GetState() == VENUS_STATE_IDLE)
			SetState(VENUS_STATE_GROW);
	}
	if (GetState() == VENUS_STATE_SHRINK && this->y >= this->startOy) {
		SetState(VENUS_STATE_IDLE);
	}
	if (GetState() == VENUS_STATE_GROW && this->y < this->fullGrowOy) {

		SetState(VENUS_STATE_FIRE);
		OutputDebugStringW(L"BOOOOMMMM.");

	}
	vy += ay * dt;
	vx += ax * dt;

	//if ((state == _STATE_DIE) && (GetTickCount64() - die_start > GOOMBA_DIE_TIMEOUT))
	//{
		//isDeleted = true;
		//return;
	//}

	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	if (this->boom != nullptr) {
		CCollision::GetInstance()->Process(boom, dt, coObjects);
	}
}

void CVenusG::Render()
{
	int aniId = ID_ANI_VENUSG_GROW;
	/*
	if (state == GOOMBA_STATE_DIE)
	{
		aniId = ID_ANI_GOOMBA_DIE;
	}
	*/
	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	RenderBoundingBox();
	if (this->boom != nullptr) {
		boom->Render();
	}
}

void CVenusG::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void CVenusG::OnCollisionWith(LPCOLLISIONEVENT e)
{

}

CVenusG::CVenusG(float x, float y)
{

	startOy = y;
	fullGrowOy = y - 32;
	this->ax = 0;
	this->ay = 0.001f;
	SetState(VENUS_STATE_IDLE);
}

void CVenusG::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case VENUS_STATE_IDLE:
		vx = 0;
		vy = 0;
		ay = 0;
		break;
	case VENUS_STATE_GROW:
		vy = -0.06f;
		break;
	case VENUS_STATE_FIRE:
	{
		boom = new CBOOM(this->x, y);
		boom->SetPosition(this->x, y);
		CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
		this->boom->genx = this->boom->GetOx();
		this->boom->geny = this->boom->GetOy();
		if (mario != nullptr) {

			mario->GetPosition(boom->Mx, boom->My);
		}
		vy = 0;
		y--;
		SetState(VENUS_STATE_SHRINK);
		break;
	}
	case VENUS_STATE_SHRINK:
		vy = 0.06f;
		break;
	}
}



void CBOOM::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - 8 / 2;
	top = y - 8 / 2;
	right = left + 8;
	bottom = top + 8;
}

int CBOOM::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CBOOM::OnNoCollision(DWORD dt)
{
	if (Mx < genx) {

		x += -vx * dt;
		y = (((this->x - genx) * (My - this->geny) / (My - this->genx))) + geny;
	}
	else {
		x += vx * dt;
		y = -(((this->x - genx) * (My - this->geny) / (My - this->genx))) + geny;
	}
}

void CBOOM::OnCollisionWith(LPCOLLISIONEVENT e)
{
	if (dynamic_cast<CMario*>(e->obj)) {
		OutputDebugStringW(L"MARIO GOT HIT\n");
		this->isDeleted = 1;
	}
}

void CBOOM::Render()
{
	CAnimations::GetInstance()->Get(ID_ANI_FIRE_BALL)->Render(x, y);
	RenderBoundingBox();
}

CBOOM::CBOOM(float x, float y)
{
	this->vx = 0.1f;
	ax = 0;
	ay = 0;
}

void CBOOM::SetState(int state)
{
}

void CBOOM::Setvx(float vx)
{
}

void CBOOM::Setx(float x)
{
}


void CBOOM::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

