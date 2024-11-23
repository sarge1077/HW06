#ifndef HW06_GraphicEditor
#define HW06_GraphicEditor

#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;

class GraphicEditor{
    vector<Shape*> v;
public:
    void runEditor();
    void insertShape(int insertNum);
    void deleteShape(int deleteNum);
};

#endif