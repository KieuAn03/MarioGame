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



class CBrick : public CGameObject {
public:
	CBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
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



