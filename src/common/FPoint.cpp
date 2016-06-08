#include "stdafx.h"
#include "FPoint.h"
FPoint::FPoint()
{
}

FPoint::~FPoint()
{
}

float FPoint::GetDistanceTo(FPoint target) {
	float res = (float)sqrt((target._x - _x)*(target._x - _x) +
					 (target._y - _y)*(target._y - _y));
	return res;
};
float FPoint::GetDistanceTo(IPoint target) {
	float res = (float)sqrt((target._x - _x)*(target._x - _x) +
					 (target._y - _y)*(target._y - _y));
	return res;
};
