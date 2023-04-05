#include "circle_manager.h"
#include "circle_impl.h"

Circle* CircleManager::create(double radius){
	Circle* circlePtr = new CircleImpl(radius);
	return circlePtr;
}

void CircleManager::destroy(Circle *circlePtr){
	delete circlePtr;
}

