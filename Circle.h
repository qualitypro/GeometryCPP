/*
 * Circle.h
 *
 *  Created on: Nov 28, 2018
 *      Author: Mike Dietz 
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

namespace Shapes {

class Circle: public Shape {
public:
	Circle();
	virtual ~Circle();
	virtual int getArea(){
		return(3.14 * radius * radius);
	}
	void setRadius(int r) {
		radius = r;
	}
protected:
	int radius;

};

} /* namespace Shapes */

#endif /* CIRCLE_H_ */
