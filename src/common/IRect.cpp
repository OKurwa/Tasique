#include "stdafx.h"
#include "IRect.h"
//#include "IPoint.h"

IRect::IRect()
{
	_point0 = IPoint(0, 0);
	_point1 = IPoint(0, 0);
	_point2 = IPoint(0, 0);
	_point3 = IPoint(0, 0);
	_width = 0;
	_height = 0;
}
IRect::IRect(const IPoint & position, int width, int height) {
	_point0 = position;
	_point1 = IPoint(position._x, position._y + height);
	_point2 = IPoint(position._x + width, position._y + height);
	_point3 = IPoint(position._x + width, position._y);
	_width = width;
	_height = height;
};

IRect::IRect(int xStart, int yStart, int width, int height) {
	_point0 = IPoint(xStart, yStart);
	_point1 = IPoint(xStart, yStart + height);
	_point2 = IPoint(xStart + width, yStart + height);
	_point3 = IPoint(xStart + width, yStart);
	_width = width;
	_height = height;
};

void IRect::MoveTo(const IPoint & position) {

	_point0 = position;
	_point1 = IPoint(_point0._x, _point0._y + _height);
	_point2 = IPoint(_point0._x + _width, _point0._y + _height);
	_point3 = IPoint(_point0._x + _width, _point0._y);
};

void IRect::MoveBy(const IPoint & position) {
	_point0 = _point0 + position;
	_point1 = _point1 + position;
	_point2 = _point2 + position;
	_point3 = _point3 + position;
};

IRect IRect::MovedTo(const IPoint & position) const {
	IRect resultRect = IRect(position, _width, _height);
	return resultRect;
};

IRect IRect::MovedBy(const IPoint & position) const {
	IPoint pos = _point0;
	pos = pos + position;
	IRect resultRect = IRect(pos, _width, _height);
	return resultRect;
};

IRect::~IRect()
{
}
