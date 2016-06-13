#include "stdafx.h"
#include "FPoint.h"
FPoint::FPoint()
{
	_x = 0;
	_y = 0;
}
FPoint::FPoint(float x, float y) {
	_x = x;
	_y = y;
};
FPoint::FPoint(IPoint p) {
	_x = p._x;
	_y = p._y;
};

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

IPoint FPoint::Rounded() {
	return IPoint((int)round(_x), (int)round(_y));
};

FPoint FPoint::operator +(const IPoint & p) {
	return FPoint(this->_x + p._x, this->_y + p._y);
};
FPoint FPoint::operator +(const FPoint & p) {
	return FPoint(this->_x + p._x, this->_y + p._y);
};