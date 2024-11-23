#include <iostream>
#include "GraphicEditor.h"
#include "UI.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

void GraphicEditor::insertShape(int insertNum){
    switch (insertNum)
    {
    case 1:
        v.push_back(new Line());
        break;
    case 2:
        v.push_back(new Circle());
        break;
    case 3:
        v.push_back(new Rect());
        break;
    }
}

void GraphicEditor::deleteShape(int deleteNum){
    vector<Shape*>::iterator it;
    it=v.begin();
    it+=deleteNum;
    it=v.erase(it);
}

void GraphicEditor::runEditor(){
    int checkNum,insertNum,deleteNum;

    cout<<"그래픽 에디터입니다.\n";
    while(true){
        checkNum=UI::setInterface();
        if(checkNum==1){
            insertNum=UI::setShape();
            insertShape(insertNum);
        }
        else if(checkNum==2){
            deleteNum=UI::setDeleteShape();
            deleteShape(deleteNum);
        }
        else if(checkNum==3){
            vector<Shape*>::iterator it;
            for(int i=0;i<v.size();i++){
                cout<<i<<" : ";
                v[i]->paint();
            }
        }
        else if(checkNum==4) {
            cout<<"종료되었습니다.\n";
            break;
        }
    }
}