#pragma once
class FPoint
{
public:
	FPoint();
	FPoint(IPoint);
	FPoint(float x,float y);
	
	
	float GetDistanceTo(FPoint);
	float GetDistanceTo(IPoint);
	IPoint Rounded();


	FPoint operator +(const IPoint & p);
	FPoint operator +(const FPoint & p);
	~FPoint();
	float _x;
	float _y;
private:
	
};



