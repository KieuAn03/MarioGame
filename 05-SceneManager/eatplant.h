#pragma once
#pragma once
#pragma once
#include "GameObject.h"
#define VENUS_GRAVITY 0.002f
#define VENUS_WALKING_SPEED 0.05f


#define VENUS_BBOX_WIDTH 16
#define VENUS_BBOX_HEIGHT 32

#define VENUS_BBOX_HEIGHT_DIE 7

#define VENUS_DIE_TIMEOUT 500

#define VENUS_STATE_IDLE 99
#define VENUS_STATE_GROW 100
#define VENUS_STATE_FIRE 101
#define VENUS_STATE_SHRINK 102
#define VENUS_STATE_DIE 200


#define ID_ANI_VENUS_GROW 5311
#define ID_ANI_VENUS_DIE 5311
#define ID_ANI_FIRE_BALL 5311



class CEatPlant : public CGameObject
{
protected:
	float ax;
	float ay;
	float fullGrowOy;
	float startOy;
	ULONGLONG die_start;

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();
	virtual int IsCollidable() { return 0; };
	int IsDirectionColliable(float nx, float ny);
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	CEatPlant(float x, float y);
	virtual void SetState(int state);
};


