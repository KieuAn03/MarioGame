#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_BRICK 10000
#define BRICK_WIDTH 16
#define BRICK_BBOX_WIDTH 16
#define BRICK_BBOX_HEIGHT 16


#define ID_ANI_BACKBRICK 2000
#define BACKBRICK_WIDTH 16
#define BACKBRICK_BBOX_WIDTH 16
#define BACKBRICK_BBOX_HEIGHT 16

#define ID_ANI_SAND 4000
#define SAND_WIDTH 16
#define SAND_BBOX_WIDTH 16
#define SAND_BBOX_HEIGHT 16

#define ID_ANI_CLOUNDSMILE 4100
#define CLOUNDSMILE_WIDTH 16
#define CLOUNDSMILE_BBOX_WIDTH 16
#define CLOUNDSMILE_BBOX_HEIGHT 16

#define ID_ANI_MYSBOX 4200

#define ID_ANI_BOTPIPL 4301
#define ID_ANI_BOTPIPR 4302
#define ID_ANI_TOPPIPL 4303
#define ID_ANI_TOPPIPR 4304
class CBrick : public CGameObject {
public:
	CBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CCloundSmile : public CGameObject {
public:
	CCloundSmile(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};


class CBackBrick : public CGameObject {
public:
	CBackBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};


class CSand : public CGameObject {
public:
	CSand(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};

class CMysBox : public CGameObject {
public:
	CMysBox(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};

class CBotPipL : public CGameObject {
public:
	CBotPipL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};
class CBotPipR : public CGameObject {
public:
	CBotPipR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};
class CTopPipL : public CGameObject {
public:
	CTopPipL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};
class CTopPipR : public CGameObject {
public:
	CTopPipR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);

};