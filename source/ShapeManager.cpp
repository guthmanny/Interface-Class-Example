#include "ShapeManager.h"
#include "Circle.h"

Shape* ShapeManager::create(double side){
	Shape* shapePtr = new Circle(side);
	return shapePtr;
}

void ShapeManager::destroy(Shape* shapePtr){
	delete shapePtr;
}

