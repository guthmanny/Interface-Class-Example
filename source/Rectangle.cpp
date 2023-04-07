#include <cmath>
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double _side) : side(_side){}

double Rectangle::area(){
	return side * side;
}

