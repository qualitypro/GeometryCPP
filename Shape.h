/*
 * Shape.h
 *
 *  Created on: Nov 27, 2018
 *      Author: Mike Dietz 
 */

#ifndef SHAPE_H_
#define SHAPE_H_

namespace Shapes {

class Shape {
public:
	virtual ~Shape();

	// pure virtual function providing interface framework.
	//virtual int getArea() = 0;
/*
	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

protected:
	int width;
	int height;
*/
};


} /* namespace Shapes */

#endif /* SHAPE_H_ */
