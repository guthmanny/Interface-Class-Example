#include "ShapeManager.h"
#include "Circle.h"
#include "Square.h"

Shape* ShapeManager::create(double side){
	Shape* shapePtr = new Square(side);
	return shapePtr;
}

void ShapeManager::destroy(Shape* shapePtr){
	delete shapePtr;
}

