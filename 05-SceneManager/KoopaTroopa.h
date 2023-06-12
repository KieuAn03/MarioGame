#pragma once
#include "GameObject.h"
#include "Goomba.h"
#define TROOPA_GRAVITY 0.002f
#define TROOPA_WALKING_SPEED 0.05f


#define TROOPA_BBOX_WIDTH 16
#define TROOPA_BBOX_HEIGHT 24
#define TROOPA_BBOX_HEIGHT_DIE 7

#define TROOPA_DIE_TIMEOUT 6000

#define TROOPA_STATE_WALKING 100
#define TROOPA_STATE_DIE 200

#define ID_ANI_TROOPA_WALKING 5201
#define ID_ANI_TROOPA_DIE 5202
class KoopaHead : public CGameObject
{
protected:
	float ax;
	float ay;

	ULONGLONG die_start;

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	
	

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);

	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	virtual void Render();
	KoopaHead(float x, float y);
	virtual void SetState(int state);
	virtual void Setvx(float vx);
	virtual float GetOy();
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
};

class KoopaTroopa : public CGameObject
{
protected:
	float ax;
	float ay;
	KoopaHead *head;
	ULONGLONG die_start;
	CGoomba* testobj;
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

