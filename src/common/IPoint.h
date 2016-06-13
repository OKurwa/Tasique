#pragma once

class IPoint
{
public:
	IPoint();
	IPoint(int x, int y);
	IPoint operator +(const IPoint & p);
	~IPoint();
	int _x;
	int _y;
private:
	
};




