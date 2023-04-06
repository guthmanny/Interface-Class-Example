#include <iostream>
#include "Shape.h"
#include "ShapeManager.h"

using namespace std;
int main(int argc, char *argv[]) {
	
	Shape* shapePtr = ShapeManager::create(3);
	cout<<shapePtr->area() <<endl;
	ShapeManager::destroy(shapePtr);
	return 0;
	
}
