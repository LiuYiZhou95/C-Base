#include <iostream>
#include "operator/opreator_pointmember.h"

using namespace std;
class shape {
public:
    shape(){}

    ~shape(){}

    void display(){cout<<"shape"<<endl;}; //画一个多边形
    virtual void draw(){cout<<"vitrual shape"<<endl;}; //画一个多边形
};


class CRect : public shape {
public:
    CRect(){}

    ~CRect(){}

    void display(){cout<<"Creat"<<endl;};   //画一个矩形
    virtual void draw(){cout<<"vitrual Creat"<<endl;}; //画一个多边形


};
///dispaly 是函数的重定义，没有多态
///draw 是函数的重写，发生多态
int main(int argc,char*argv[]){
    shape* pShape;
    CRect rct;
    pShape = &rct;
    pShape->display();
    pShape->draw();
}


