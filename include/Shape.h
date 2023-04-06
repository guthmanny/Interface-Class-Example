// Abstract Base class

#ifndef __SHAPE__H__
#define __SHAPE__H__

class Shape{
public:
    virtual ~Shape() = default;
	virtual double area() = 0;
};

#endif
