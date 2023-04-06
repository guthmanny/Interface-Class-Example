#ifndef __SHAPE_MANAGER_H__
#define __SHAPE_MANAGER_H__

#include "Shape.h"

class ShapeManager {
public:
	static Shape* create(double side);
	static void destroy(Shape* shapePtr);
};

#endif
