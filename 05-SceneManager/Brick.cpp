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

void CTopShapeL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE0L)->Render(x, y);
}

void CTopShapeL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShapeL::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShapeM::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE0M)->Render(x, y);
}

void CTopShapeM::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShapeM::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShapeR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE0R)->Render(x, y);
}


void CTopShapeR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShapeR::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CMidShapeL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE0L)->Render(x, y);
}

void CMidShapeL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShapeL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShapeM::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE0M)->Render(x, y);
}

void CMidShapeM::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShapeM::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShapeR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE0R)->Render(x, y);
}

void CMidShapeR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShapeR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShapeL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE0L)->Render(x, y);
}

void CBotShapeL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShapeL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShapeM::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE0M)->Render(x, y);
}

void CBotShapeM::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShapeM::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShapeR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE0R)->Render(x, y);
}

void CBotShapeR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShapeR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape3R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE3R)->Render(x, y);
}

void CBotShape3R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape3R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape3M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE3M)->Render(x, y);
}

void CBotShape3M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape3M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape3L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE3L)->Render(x, y);
}

void CBotShape3L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape3L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape3R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE3R)->Render(x, y);
}

void CMidShape3R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape3R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape3M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE3M)->Render(x, y);
}

void CMidShape3M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape3M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape3L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE3L)->Render(x, y);
}

void CMidShape3L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape3L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CTopShape3R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE3R)->Render(x, y);
}



void CTopShape3R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape3R::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape3M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE3M)->Render(x, y);
}

void CTopShape3M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape3M::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape3L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE3L)->Render(x, y);
}

void CTopShape3L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape3L::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CBotShape2R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE2R)->Render(x, y);
}

void CBotShape2R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape2R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape2M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE2M)->Render(x, y);
}

void CBotShape2M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape2M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape2L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE2L)->Render(x, y);
}

void CBotShape2L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape2L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape2R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE2R)->Render(x, y);
}

void CMidShape2R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape2R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape2M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE2M)->Render(x, y);
}

void CMidShape2M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape2M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape2L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE2L)->Render(x, y);
}

void CMidShape2L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape2L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CTopShape2R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE2R)->Render(x, y);
}



void CTopShape2R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape2R::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape2M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE2M)->Render(x, y);
}

void CTopShape2M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape2M::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape2L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE2L)->Render(x, y);
}

void CTopShape2L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape2L::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CBotShape1R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE1R)->Render(x, y);
}

void CBotShape1R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape1R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape1M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE1M)->Render(x, y);
}

void CBotShape1M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape1M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CBotShape1L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTSHAPE1L)->Render(x, y);
}

void CBotShape1L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CBotShape1L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape1R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE1R)->Render(x, y);
}

void CMidShape1R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape1R::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape1M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE1M)->Render(x, y);
}

void CMidShape1M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape1M::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CMidShape1L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDSHAPE1L)->Render(x, y);
}

void CMidShape1L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CMidShape1L::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CTopShape1R::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE1R)->Render(x, y);
}

void CTopShape1R::Update(DWORD dt)
{
}

void CTopShape1R::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape1R::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape1M::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE1M)->Render(x, y);
}

void CTopShape1M::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape1M::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CTopShape1L::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPSHAPE1L)->Render(x, y);
}

void CTopShape1L::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CTopShape1L::IsDirectionColliable(float nx, float ny)
{
	if (nx == 0 && ny == -1) return 1;
	else return 0;
}

void CGrassTOPL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPGRASSL)->Render(x, y);
}

void CGrassTOPL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassTOPL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassTOPR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_TOPGRASSR)->Render(x, y);
}

void CGrassTOPR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassTOPR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassBOTL::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTGRASSL)->Render(x, y);
}

void CGrassBOTL::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassBOTL::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassBOTR::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTGRASSR)->Render(x, y);
}

void CGrassBOTR::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassBOTR::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassBOTLa::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTGRASSLa)->Render(x, y);
}

void CGrassBOTLa::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassBOTLa::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassBOTLb::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BOTGRASSRa)->Render(x, y);
}

void CGrassBOTLb::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassBOTLb::IsDirectionColliable(float nx, float ny)
{
	return 0;
}

void CGrassMid::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_MIDGRASS)->Render(x, y);
}

void CGrassMid::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

int CGrassMid::IsDirectionColliable(float nx, float ny)
{
	return 0;
}
