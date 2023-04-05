#include <cmath>
#include <iostream>
#include "circle_impl.h"

CircleImpl::CircleImpl(double _radius) : radius(_radius){}

double CircleImpl::area(){
	return 3.14 * radius * radius;
}

