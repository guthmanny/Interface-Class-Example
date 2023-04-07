#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"

class Rectangle: public Shape{
private:
	double side;
public:
	Rectangle(double);
	double area();
};

#endif

