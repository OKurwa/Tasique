#include "stdafx.h"
#include "FPoint3D.h"
FPoint3D::FPoint3D()
{
}

FPoint3D::~FPoint3D()
{
}

float FPoint3D::GetDistanceTo(FPoint3D target) {
	float res = (float)sqrt((target._x - _x)*(target._x - _x) +
					 (target._y - _y)*(target._y - _y) +
					 (target._z - _z)*(target._z - _z));
	return res;
};
float FPoint3D::GetDistanceTo(IPoint3D target) {
	float res = (float)sqrt((target._x - _x)*(target._x - _x) +
					 (target._y - _y)*(target._y - _y) +
					 (target._z - _z)*(target._z - _z));
	return res;
};
