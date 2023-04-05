#ifndef __CIRCLE_MANAGER_H__
#define __CIRCLE_MANAGER_H__

#include "circle.h"

class CircleManager {
public:
	static Circle* create(double radius);
	static void destroy(Circle* circlePtr);
};

#endif