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

void CCloundSmile::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_CLOUNDSMILE)->Render(x, y);
}

void CCloundSmile::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y -	CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CCloundSmile::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CMysBox::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MYSBOX)->Render(x, y);
}

void CMysBox::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMysBox::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CTopPipL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPPIPL)->Render(x, y);
}

void CTopPipL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopPipL::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CBotPipL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTPIPL)->Render(x, y);
}

void CBotPipL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotPipL::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CBotPipR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTPIPR)->Render(x, y);
}

void CBotPipR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotPipR::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CTopPipR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPPIPR)->Render(x, y);
}

void CTopPipR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopPipR::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void CTopCloundR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPCLOUNDR)->Render(x, y);
}

void CTopCloundR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopCloundR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CTopCloundM::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPCLOUNDM)->Render(x, y);
}

void CTopCloundM::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopCloundM::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CTopCloundL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPCLOUNDL)->Render(x, y);
}

void CTopCloundL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopCloundL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotCloundR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTCLOUNDR)->Render(x, y);
}

void CBotCloundR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotCloundR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotCloundM::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTCLOUNDM)->Render(x, y);
}

void CBotCloundM::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotCloundM::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotCloundL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTCLOUNDL)->Render(x, y);
}

void CBotCloundL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotCloundL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}
