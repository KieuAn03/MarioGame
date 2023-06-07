#include "Brick.h"

void CBrick::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BRICK)->Render(x, y);
	//RenderBoundingBox();
}

void CBrick::GetBoundingBox(float &l, float &t, float &r, float &b)
{
	l = x - BRICK_BBOX_WIDTH/2;
	t = y - BRICK_BBOX_HEIGHT/2;
	r = l + BRICK_BBOX_WIDTH;
	b = t + BRICK_BBOX_HEIGHT;
}

void CBackBrick::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BACKBRICK)->Render(x, y);
	//RenderBoundingBox();
}

void CBackBrick::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BACKBRICK_BBOX_WIDTH / 2;
	t = y - BACKBRICK_BBOX_HEIGHT / 2;
	r = l + BACKBRICK_BBOX_WIDTH;
	b = t + BACKBRICK_BBOX_HEIGHT;
}

int CBackBrick::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CSand::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_SAND)->Render(x, y);
}

void CSand::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - SAND_BBOX_WIDTH / 2;
	t = y - SAND_BBOX_HEIGHT / 2;
	r = l + SAND_BBOX_WIDTH;
	b = t + SAND_BBOX_HEIGHT;

}

int CSand::IsDirectionColliable(float nx, float ny)
{
	return 1;
}
