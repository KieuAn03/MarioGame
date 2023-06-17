#include "Mysbox.h"
#include "Mario.h"
#include "PlayScene.h"

void CMysBox::Render()
{
	top->Render();
	bot->Render(); 
	CAnimations* animations = CAnimations::GetInstance();
	int aniId = ID_ANI_MYSBOX;
	if (state == BOX_STATE_DEAD) {
		aniId = ID_ANI_MYSBOX_DEAD;
	}
	animations->Get(aniId)->Render(x, y);
	RenderBoundingBox();
	
}

void CMysBox::OnNoCollision(DWORD dt)
{
	if (state == BOX_STATE_ALIVE) {
		x = x;
		y = y;
	}
	else {
		x += vx * dt;
		y += vy * dt;
	}
	
}

void CMysBox::OnCollisionWith(LPCOLLISIONEVENT e)
{
	

	if (GetState() == BOX_STATE_DEAD) {
		this->y += 1;
		return;
	}
	if (dynamic_cast<MysBoxBot*>(e->obj)) return;
	OutputDebugStringW(L"MYSBOX COLLISON.");
	if (e->ny <0) {

		if (dynamic_cast<CMario*>(e->obj)) {


			if (state == BOX_STATE_ALIVE) {
				if (dynamic_cast<CMario*>(e->obj)) {
					CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
					mario->SetVy(-0.1f);

				}
				if (dynamic_cast<CMysBox*>(e->obj)) { return; }
				vy = -0.4f;
				SetState(BOX_STATE_DEAD);
				this->colliable = 0;
				SetIsColliable(1);

			}
		}
	
	}
}

CMysBox::CMysBox(float x, float y)
{
	
	this->bot = new MysBoxBot(x, y + 16);
	this->bot->SetPosition(x, y + 17);
	this->top = new MysBoxTop(x, y - 28);
	this->top->SetPosition(x, y - 29);
	this->ax = 0;
	this->ay = 0.001f;
	die_start = -1;
	SetState(BOX_STATE_ALIVE);
	this->startoy = y;
	
	

}

void CMysBox::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case BOX_STATE_DEAD:
		break;
	case BOX_STATE_ALIVE:
	{
		break;
	}
	}
}



int CMysBox::IsCollidable()
{
	
	return this->colliable;

}

void CMysBox::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	t = y - (CLOUNDSMILE_BBOX_HEIGHT) / 2;
	r = l + CLOUNDSMILE_BBOX_WIDTH;
	b = t + CLOUNDSMILE_BBOX_HEIGHT;
}

void CMysBox::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	
	bot->Update(dt, coObjects);
	top->Update(dt, coObjects);
	if (state == BOX_STATE_ALIVE) {
		vy += ay * dt;
		vx += ax * dt;
	}
	
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
	


}

void MysBoxBot::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	top = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	right = left + CLOUNDSMILE_BBOX_WIDTH;
	bottom = top + CLOUNDSMILE_BBOX_HEIGHT;
}

int MysBoxBot::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void MysBoxBot::OnNoCollision(DWORD dt)
{
}

void MysBoxBot::OnCollisionWith(LPCOLLISIONEVENT e)
{
	if (dynamic_cast<CMysBox*>(e->obj)) {
		CMysBox* mysbox = dynamic_cast<CMysBox*>(e->obj);
		if (mysbox->GetState() == BOX_STATE_DEAD) {
			mysbox->SetOy(mysbox->startoy);
			mysbox->SetSpeed(0, 0);
			mysbox->SetA(0, 0);
			return;
		}

		mysbox->SetSpeed(0, 0);
		mysbox->SetA(0, 0);
		
	}


}

void MysBoxBot::Render()
{
	RenderBoundingBox();
}

MysBoxBot::MysBoxBot(float x, float y)
{
	ax = 0;
	vx = 0;
	vy = 0;
	ay = 0;
}

void MysBoxBot::SetState(int state)
{
}

void MysBoxBot::Setvx(float vx)
{
}

void MysBoxBot::Setx(float x)
{
}

float MysBoxBot::GetOy()
{
	return 0.0f;
}

void MysBoxBot::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void MysBoxTop::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - CLOUNDSMILE_BBOX_WIDTH / 2;
	top = y - CLOUNDSMILE_BBOX_HEIGHT / 2;
	right = left + CLOUNDSMILE_BBOX_WIDTH;
	bottom = top + CLOUNDSMILE_BBOX_HEIGHT;
}

int MysBoxTop::IsDirectionColliable(float nx, float ny)
{
	return 1;
}

void MysBoxTop::OnNoCollision(DWORD dt)
{
}

void MysBoxTop::OnCollisionWith(LPCOLLISIONEVENT e)
{
	if (dynamic_cast<CMysBox*>(e->obj)) {
		CMysBox* mysbox = dynamic_cast<CMysBox*>(e->obj);
		mysbox->SetSpeed(0, 0.1f);
		//mysbox->SetA(0, 0);
	}
}

void MysBoxTop::Render()
{
	RenderBoundingBox();
}

MysBoxTop::MysBoxTop(float x, float y)
{
	ax = 0;
	vx = 0;
	vy = 0;
	ay = 0;
}

void MysBoxTop::SetState(int state)
{
}

void MysBoxTop::Setvx(float vx)
{
}

void MysBoxTop::Setx(float x)
{
}

float MysBoxTop::GetOy()
{
	return 0.0f;
}

void MysBoxTop::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}
