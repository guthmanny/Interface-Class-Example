#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"

class Square : public Shape{
private:
	double side;
public:
	Square(double side);
	double area();
};

#endif

