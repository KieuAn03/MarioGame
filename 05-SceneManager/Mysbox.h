#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define CLOUNDSMILE_WIDTH 14
#define CLOUNDSMILE_BBOX_WIDTH 13
#define CLOUNDSMILE_BBOX_HEIGHT 16
#define ID_ANI_MYSBOX 4200

#define BOX_STATE_ALIVE 100
#define BOX_STATE_DEAD 101

class MysBoxBot : public CGameObject
{
protected:
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	int IsDirectionColliable(float nx, float ny);
	virtual int IsCollidable() { return 1 ; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	float ax;
	float ay;
	virtual void Render();
	MysBoxBot(float x, float y);
	virtual void SetState(int state);
	virtual void Setvx(float vx);
	virtual void Setx(float x);
	virtual float GetOy();
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
};

class MysBoxTop : public CGameObject
{
protected:
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	int IsDirectionColliable(float nx, float ny);
	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	float ax;
	float ay;
	virtual void Render();
	MysBoxTop(float x, float y);
	virtual void SetState(int state);
	virtual void Setvx(float vx);
	virtual void Setx(float x);
	virtual float GetOy();
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
};

class CMysBox : public CGameObject {
protected:
	float ax;
	float ay;
	MysBoxBot* bot;
	MysBoxTop* top;
	ULONGLONG die_start;
	ULONGLONG revie_start;
	
	int IsDirectionColliable(float nx, float ny);
	virtual int IsCollidable() { return 1; };
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();
	virtual void OnNoCollision(DWORD dt);
	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

public:
	bool followMario = false;
	CMysBox(float x, float y);
	virtual void SetState(int state);
	virtual void SetA(float ax, float ay) { this->ax = ax; this->ay = ay; };
	virtual void SetIsColliable(int x) { IsCollidable(); };




};
