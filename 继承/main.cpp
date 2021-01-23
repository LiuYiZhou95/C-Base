#include <iostream>

using namespace std;

class Base {	//基类
public :
    int pub;
private:
    int pri;
protected :
    int pro;
};

class A: public Base{	//public继承
public :
    int a;
    void init() {
        a = pub;	//可以，依然为public成员
        a = pro;	//可以，依然为protected成员
//        a = pri;	//错误，基类的私有成员在派生类中是不可见的
    }
};

class B : protected Base{	//protected继承
public :
    int b;
    void init() {
        b = pub;	//可以，变为protected成员
        b = pro;	//可以，依然为protected成员
//        b = pri;	//错误，基类的私有成员在派生类中是不可见的
    }
};

class C : private Base{	//private继承
public :
    int c;
    void init() {
        c = pub;	//可以，变为private成员
        c = pro;	//可以，变为private成员
//        c = pri;	//错误，基类的私有成员在派生类中是不可见的
    }
};
int main(){
    int x;
    A a;
    x = a.pub;	//可以，public继承的public成员是public的，对对象可见
//    x = a.pro;	//错误，public继承的protected成员是protected的，对对象不可见
//    x = a.pri;	//错误，public继承的private成员是private的，对对象不可见

    B b;
//    x = b.pub;	//错误，protected继承的public成员是protected的，对对象不可见
//    x = b.pro;	//错误，protected继承的protected成员是protected的，对对象不可见
//    x = b.pri;	//错误，protected继承的private成员是private的，对对象不可见

    C c;
//    x = c.pub;	//错误，protected继承的public成员是private的，对对象不可见
//    x = c.pro;	//错误，protected继承的protected成员是private的，对对象不可见
//    x = c.pri;	//错误，protected继承的private成员是private的，对对象不可见
    return 0;
}

