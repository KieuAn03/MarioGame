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


#define ID_ANI_VENUS_GROW 5301
#define ID_ANI_VENUS_DIE 5001
#define ID_ANI_FIRE_BALL 5306
#define ID_ANI_VENUSG_GROW 5315


class CBOOM : public CGameObject
{
protected:
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual int IsCollidable() { return 1; };
	int IsDirectionColliable(float nx, float ny);
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	float genx = 111;
	float geny = 111;
	float Mx=-1;
	float My=-1;
	float ax;
	float ay;
	virtual void Render();
	CBOOM(float x, float y);
	virtual void SetState(int state);
	virtual void Setvx(float vx);
	virtual void Setx(float x);
	virtual float GetOx() { return this->x; };
	virtual float GetOy() { return this->y; };
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
};

class CVenusR : public CGameObject
{
protected:
	float ax;
	float ay;
	float fullGrowOy;
	float startOy;
	ULONGLONG die_start;
	CBOOM* boom;
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();
	virtual int IsCollidable() { return 0; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	CVenusR(float x, float y);
	virtual void SetState(int state);
};


class CVenusG : public CGameObject
{
protected:
	float ax;
	float ay;
	float fullGrowOy;
	float startOy;
	ULONGLONG die_start;
	CBOOM* boom;
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();
	virtual int IsCollidable() { return 0; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	CVenusG(float x, float y);
	virtual void SetState(int state);
};


