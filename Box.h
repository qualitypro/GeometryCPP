/*
 * Box.h
 *
 *  Created on: Nov 28, 2018
 *      Author: Mike Dietz 
 */

#ifndef BOX_H_
#define BOX_H_

#include "Shape.h"

namespace Shapes {

class Box: public Shape {
public:
	Box();
	virtual ~Box();
    virtual int getVolume() {
       return (width * height * length);
    }
	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

	void setLength(int l) {
		length = l;
	}

protected:
	int width;
	int height;
	int length;

};

} /* namespace Shapes */

#endif /* BOX_H_ */
