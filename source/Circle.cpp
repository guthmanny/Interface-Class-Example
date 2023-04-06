#include <cmath>
#include <iostream>
#include "Circle.h"

Circle::Circle(double _side) : side(_side){}

double Circle::area(){
	return 3.14 * side * side;
}

