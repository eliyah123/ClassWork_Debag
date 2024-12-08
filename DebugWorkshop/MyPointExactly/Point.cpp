#include "Point.h"
#include <iostream>

Point::Point()
{
	_coord = new int[2];
	_coord[0] = _coord[1] = 0;
}

Point::Point(int x, int y)
{
	_coord = new int[2];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	_coord = new int[2];
	_coord[0] = other.getX();
	_coord[1] = other.getY();

	
}

Point::~Point()
{
	delete[] _coord;
}

Point& Point::operator=(const Point& other)
{
	delete _coord;
	_coord = new int[2];
	memcpy(_coord, other._coord, 8);
	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}


std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}