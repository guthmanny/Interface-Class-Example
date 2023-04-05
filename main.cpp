#include <iostream>
#include "circle_manager.h"
#include "circle.h"

using namespace std;
int main(int argc, char *argv[]) {
	
	Circle* circlePtr = CircleManager::create(3);
	cout<<circlePtr->area() <<endl;
	CircleManager::destroy(circlePtr);
	return 0;
	
}