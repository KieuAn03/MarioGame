#pragma once
#include "GameObject.h"
#define TROOPA_GRAVITY 0.002f
#define TROOPA_WALKING_SPEED 0.05f


#define TROOPA_BBOX_WIDTH 16
#define TROOPA_BBOX_HEIGHT 14
#define TROOPA_BBOX_HEIGHT_DIE 7

#define TROOPA_DIE_TIMEOUT 6000

#define TROOPA_STATE_WALKING 100
#define TROOPA_STATE_DIE 200

#define ID_ANI_TROOPA_WALKING 5000
#define ID_ANI_TROOPA_DIE 5001

class KoopaTroopa : public CGameObject
{
protected:
	float ax;
	float ay;
	KoopaHead* head;
	ULONGLONG die_start;

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);

	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	KoopaTroopa(float x, float y);
	virtual void SetState(int state);
};

class KoopaHead : public CGameObject
{
protected:
	float ax;
	float ay;
	
	ULONGLONG die_start;

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);

	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	KoopaHead(float x, float y);
	virtual void SetState(int state);
};
