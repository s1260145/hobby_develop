#pragma once
#include "ObjectData.h"

class PhysicalObject : public ObjectData
{
public:
	void updateCoord(const Coordinate&);
	void updateVec(const Velocity&);
	void updateOnWhere(const OnWhere&);
	void gravitate(bool flag); //重力に素直に従うものはtrue 反重力に従うものはfalse
};