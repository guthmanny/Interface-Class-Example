#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"

class Circle : public Shape{
private:
	double side;
public:
	Circle(double side);
	double area();
};

#endif

