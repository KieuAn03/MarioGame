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

#define ID_ANI_TOPCLOUNDL 4400
#define ID_ANI_TOPCLOUNDM 4401
#define ID_ANI_TOPCLOUNDR 4402
#define ID_ANI_BOTCLOUNDL 4403
#define ID_ANI_BOTCLOUNDM 4404
#define ID_ANI_BOTCLOUNDR 4405


#define ID_ANI_TOPSHAPE0L 4660
#define ID_ANI_TOPSHAPE0M 4661
#define ID_ANI_TOPSHAPE0R 4662
#define ID_ANI_MIDSHAPE0L 4663
#define ID_ANI_MIDSHAPE0M 4664
#define ID_ANI_MIDSHAPE0R 4665
#define ID_ANI_BOTSHAPE0L 4666
#define ID_ANI_BOTSHAPE0M 4667
#define ID_ANI_BOTSHAPE0R 4668


#define ID_ANI_TOPSHAPE1L 4670
#define ID_ANI_TOPSHAPE1M 4671
#define ID_ANI_TOPSHAPE1R 4672
#define ID_ANI_MIDSHAPE1L 4673
#define ID_ANI_MIDSHAPE1M 4674
#define ID_ANI_MIDSHAPE1R 4675
#define ID_ANI_BOTSHAPE1L 4676
#define ID_ANI_BOTSHAPE1M 4677
#define ID_ANI_BOTSHAPE1R 4678

#define ID_ANI_TOPSHAPE2L 4680
#define ID_ANI_TOPSHAPE2M 4681
#define ID_ANI_TOPSHAPE2R 4682
#define ID_ANI_MIDSHAPE2L 4683
#define ID_ANI_MIDSHAPE2M 4684
#define ID_ANI_MIDSHAPE2R 4685
#define ID_ANI_BOTSHAPE2L 4686
#define ID_ANI_BOTSHAPE2M 4687
#define ID_ANI_BOTSHAPE2R 4688

#define ID_ANI_TOPSHAPE3L 4690
#define ID_ANI_TOPSHAPE3M 4691
#define ID_ANI_TOPSHAPE3R 4692
#define ID_ANI_MIDSHAPE3L 4693
#define ID_ANI_MIDSHAPE3M 4694
#define ID_ANI_MIDSHAPE3R 4695
#define ID_ANI_BOTSHAPE3L 4696
#define ID_ANI_BOTSHAPE3M 4697
#define ID_ANI_BOTSHAPE3R 4698


#define ID_ANI_TOPGRASSL 4710
#define ID_ANI_TOPGRASSR 4711
#define ID_ANI_BOTGRASSL 4712
#define ID_ANI_BOTGRASSR 4713
#define ID_ANI_BOTGRASSLa 4714
#define ID_ANI_BOTGRASSRa 4715
#define ID_ANI_MIDGRASS 4716
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

class CTopCloundR : public CGameObject {
public:
	CTopCloundR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopCloundM : public CGameObject {
public:
	CTopCloundM(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopCloundL : public CGameObject {
public:
	CTopCloundL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotCloundR : public CGameObject {
public:
	CBotCloundR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotCloundM : public CGameObject {
public:
	CBotCloundM(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotCloundL : public CGameObject {
public:
	CBotCloundL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopShapeL : public CGameObject {
public:
	CTopShapeL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CTopShapeM : public CGameObject {
public:
	CTopShapeM(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopShapeR : public CGameObject {
public:
	CTopShapeR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShapeL : public CGameObject {
public:
	CMidShapeL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShapeM : public CGameObject {
public:
	CMidShapeM(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShapeR : public CGameObject {
public:
	CMidShapeR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotShapeL : public CGameObject {
public:
	CBotShapeL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShapeM : public CGameObject {
public:
	CBotShapeM(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShapeR : public CGameObject {
public:
	CBotShapeR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};





// 01

class CTopShape1L : public CGameObject {
public:
	CTopShape1L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CTopShape1M : public CGameObject {
public:
	CTopShape1M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopShape1R : public CGameObject {
public:
	CTopShape1R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape1L : public CGameObject {
public:
	CMidShape1L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape1M : public CGameObject {
public:
	CMidShape1M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape1R : public CGameObject {
public:
	CMidShape1R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotShape1L : public CGameObject {
public:
	CBotShape1L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape1M : public CGameObject {
public:
	CBotShape1M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape1R : public CGameObject {
public:
	CBotShape1R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};




///02


class CTopShape2L : public CGameObject {
public:
	CTopShape2L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CTopShape2M : public CGameObject {
public:
	CTopShape2M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopShape2R : public CGameObject {
public:
	CTopShape2R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape2L : public CGameObject {
public:
	CMidShape2L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape2M : public CGameObject {
public:
	CMidShape2M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape2R : public CGameObject {
public:
	CMidShape2R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotShape2L : public CGameObject {
public:
	CBotShape2L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape2M : public CGameObject {
public:
	CBotShape2M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape2R : public CGameObject {
public:
	CBotShape2R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};



//03


class CTopShape3L : public CGameObject {
public:
	CTopShape3L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CTopShape3M : public CGameObject {
public:
	CTopShape3M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CTopShape3R : public CGameObject {
public:
	CTopShape3R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape3L : public CGameObject {
public:
	CMidShape3L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape3M : public CGameObject {
public:
	CMidShape3M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CMidShape3R : public CGameObject {
public:
	CMidShape3R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};


class CBotShape3L : public CGameObject {
public:
	CBotShape3L(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape3M : public CGameObject {
public:
	CBotShape3M(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CBotShape3R : public CGameObject {
public:
	CBotShape3R(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CGrassTOPL : public CGameObject {
public:
	CGrassTOPL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CGrassTOPR : public CGameObject {
public:
	CGrassTOPR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};

class CGrassBOTL : public CGameObject {
public:
	CGrassBOTL(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CGrassBOTR : public CGameObject {
public:
	CGrassBOTR(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CGrassBOTLa : public CGameObject {
public:
	CGrassBOTLa(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CGrassBOTLb : public CGameObject {
public:
	CGrassBOTLb(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};
class CGrassMid : public CGameObject {
public:
	CGrassMid(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny);
};