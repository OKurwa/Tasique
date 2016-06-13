#include "stdafx.h"


IPoint::IPoint()
{
	_x = 0;
	_y = 0;
}

IPoint::IPoint(int x, int y) {
	_x = x;
	_y = y;
};
IPoint IPoint::operator +(const IPoint & p) {
	return IPoint(this->_x + p._x, this->_y + p._y);
};
IPoint::~IPoint()
{
}


