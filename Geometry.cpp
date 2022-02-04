//============================================================================
// Name        : Geometry.cpp
// Author      : Mike Dietz
// Version     :
// Copyright   : All Rights Reserved
// Description : Pure virtual functions providing interface framework.
//============================================================================
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Box.h"
#include "Circle.h"

using namespace std;
using namespace Shapes;


int main(void) {

Rectangle Rect;
Triangle Tri;
Box Bx;
Circle Cr;


Rect.setHeight(17);
Rect.setWidth(10);

Tri.setHeight(7);
Tri.setWidth(10);

Bx.setHeight(7);
Bx.setWidth(10);
Bx.setLength(7);

Cr.setRadius(5);

   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() <<  "\n\n" << endl;
   cout << "Total Triangle area: " << Tri.getArea() <<  "\n\n" << endl;
   cout << "Total Circle area: " << Cr.getArea() <<  "\n\n" << endl;
   cout << "Volume of Box: " << Bx.getVolume() <<  "\n\n" << endl;

   return 0;
}
