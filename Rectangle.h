/*
 * Rectangle.h
 *
 *  Created on: Nov 27, 2018
 *      Author: Mike Dietz 
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

namespace Shapes {

// Derived classes
class Rectangle: public Shape {
public:
	Rectangle();
	virtual ~Rectangle();
    virtual int getArea() {
       return (width * height);
    }
	//virtual int getArea() = 0;

	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

protected:
	int width;
	int height;

};

} /* namespace Shapes */

#endif /* RECTANGLE_H_ */
