#include "eatplant.h"
#include <cmath>
#include "Mario.h"
#include "PlayScene.h"
void CEatPlant::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - VENUS_BBOX_WIDTH / 2;
	top = y - VENUS_BBOX_HEIGHT / 2;
	right = left + VENUS_BBOX_WIDTH;
	bottom = top + VENUS_BBOX_HEIGHT;
}

float distance1(CMario* mario, float x, float y)
{
	float Mx, My;
	mario->GetPosition(Mx, My);
	return sqrt(pow(Mx - x, 2) + pow(My - y, 2));
}

void CEatPlant::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
	
	if (distance1(mario, this->x, this->y) < 200) {
		if (GetState() == VENUS_STATE_IDLE)
			SetState(VENUS_STATE_GROW);
	}
	
	if (GetState() == VENUS_STATE_SHRINK && this->y >= this->startOy) {
		SetState(VENUS_STATE_IDLE);
	}
	if (GetState() == VENUS_STATE_GROW && this->y < this->fullGrowOy) {

		SetState(VENUS_STATE_FIRE);
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

}

void CEatPlant::Render()
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
}

void CEatPlant::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void CEatPlant::OnCollisionWith(LPCOLLISIONEVENT e)
{
}

CEatPlant::CEatPlant(float x, float y)
{

	startOy = y;
	fullGrowOy = y - 32;
	this->ax = 0;
	this->ay = 0.001f;
	SetState(VENUS_STATE_IDLE);
}

void CEatPlant::SetState(int state)
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
		{
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

}