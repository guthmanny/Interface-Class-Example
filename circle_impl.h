#ifndef __CIRCLE_IMPL_H__
#define __CIRCLE_IMPL_H__

#include "circle.h"

class CircleImpl : public Circle{
private:
	double radius;
public:
	CircleImpl(double radius);
	double area() override;
};

#endif

