//
//  main.cpp
//  L14FriendClass
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>

class A {
    //    B 是 A 的友元类，这样B可以直接访问 A 类里面的私有成员变量。 这是一种高耦合的设计，不建议使用
    friend class B;
    
private:
    int num;
    
public:
    A() {
        num = 10;
    }
};


//class B: public A {
//
//public:
//    B() {
//        printf("%d\n", num);
//    }
//};

class B{
    
    //    如果 B 不继承 A，B 也能通过友元类来访问 A 中的私有成员变量
public:
    B() {
        A a;
        printf("%d\n", a.num);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    B b;
    return 0;
}
