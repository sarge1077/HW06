#ifndef HW06_Shape
#define HW06_Shape

#include <iostream>

class Shape {
protected:
    virtual void draw()=0;
public:
    void paint();
};

#endif