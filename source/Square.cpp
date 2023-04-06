#include <cmath>
#include <iostream>
#include "Square.h"

Square::Square(double _side) : side(_side){}

double Square::area(){
	return side * side;
}

