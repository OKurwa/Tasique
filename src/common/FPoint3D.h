#pragma once
class FPoint3D
{
public:
	FPoint3D();
	~FPoint3D();

	float GetDistanceTo(FPoint3D);
	float GetDistanceTo(IPoint3D);

	float _x;
	float _y;
	float _z;
private:
	
};



