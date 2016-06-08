#pragma once
class FPoint
{
public:
	FPoint();
	~FPoint();

	float GetDistanceTo(FPoint);
	float GetDistanceTo(IPoint);

	float _x;
	float _y;
private:
	
};



