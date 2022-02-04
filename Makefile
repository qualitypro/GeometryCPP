CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Geometry.o Shape.o Rectangle.o Triangle.o Box.o Circle.o

LIBS =

TARGET =	Geometry

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
