#pragma once
//#include "IPoint.h"
class IRect
{
public:
	IRect();
	IRect(const IPoint & position, int width, int height);
	IRect(int xStart, int yStart, int width, int height);
	void MoveTo(const IPoint & position);
	void MoveBy(const IPoint & position);
	IRect MovedTo(const IPoint & position) const;
	IRect MovedBy(const IPoint & position) const;
	~IRect();

private:
	IPoint _point0;
	IPoint _point1;
	IPoint _point2;
	IPoint _point3;
	int _width;
	int _height;
};

