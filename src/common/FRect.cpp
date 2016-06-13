#include "stdafx.h"
#include "FRect.h"

//FRect::FRect(const FRect & r) {
//
//};
FRect::FRect()
{
	_point0 = FPoint(0, 0);
	_point1 = FPoint(0, 0);
	_point2 = FPoint(0, 0);
	_point3 = FPoint(0, 0);
	_width = 0;
	_height = 0;
}
FRect::FRect(const FPoint & position, float width, float height) {
	_point0 = position;
	_point1 = FPoint(position._x, position._y + height);
	_point2 = FPoint(position._x + width, position._y + height);
	_point3 = FPoint(position._x + width, position._y);
	_width = width;
	_height = height;
};

FRect::FRect(float xStart, float yStart, float width, float height) {
	_point0 = FPoint(xStart, yStart);
	_point1 = FPoint(xStart, yStart + height);
	_point2 = FPoint(xStart + width, yStart + height);
	_point3 = FPoint(xStart + width, yStart);
	_width = width;
	_height = height;
};

void FRect::MoveTo(const FPoint & position) {

	_point0 = position;
	_point1 = FPoint(_point0._x, _point0._y + _height);
	_point2 = FPoint(_point0._x + _width, _point0._y + _height);
	_point3 = FPoint(_point0._x + _width, _point0._y);
};

void FRect::MoveBy(const FPoint & position) {
	_point0 = _point0 + position;
	_point1 = _point1 + position;
	_point2 = _point2 + position;
	_point3 = _point3 + position;
};

FRect FRect::MovedTo(const FPoint & position) const {
	FRect resultRect = FRect(position, _width, _height);
	return resultRect;
};

FRect FRect::MovedBy(const FPoint & position) const {
	FPoint pos = _point0;
	pos = pos + position;
	FRect resultRect = FRect(pos, _width, _height);
	return resultRect;
};
FRect::~FRect()
{
}