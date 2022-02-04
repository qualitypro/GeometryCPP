/*
 * Triangle.h
 *
 *  Created on: Nov 28, 2018
 *      Author: Mike Dietz 
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

namespace Shapes {

// Derived classes
class Triangle: public Shape {
public:
	Triangle();
	virtual ~Triangle();
    virtual int getArea() {
       return (width * height)/2;
    }
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

#endif /* TRIANGLE_H_ */
