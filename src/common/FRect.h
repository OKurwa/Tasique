#pragma once
class FRect
{
public:
	FRect();
	//FRect(const IRect & r);
	FRect(const FPoint & position, float width, float height);
	FRect(float xStart, float yStart, float width, float height);
	void MoveTo(const FPoint & position);
	void MoveBy(const FPoint & position);
	FRect MovedTo(const FPoint & position) const;
	FRect MovedBy(const FPoint & position) const;
	~FRect();

private:
	FPoint _point0;
	FPoint _point1;
	FPoint _point2;
	FPoint _point3;
	float _width;
	float _height;
};

