//
//  main.cpp
//  L12FunctionPointer
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

class Object;

//  函数指针
typedef void(Object::*SayHi) ();
typedef void(Object::*CalllaterHandler) ();

void threadFunc(Object *target, CalllaterHandler handler, int delay) {
    sleep(delay);
    (target->*handler)();
}

void calllater(Object *target, CalllaterHandler handler, int delay) {
    std::thread t(threadFunc, target, handler, delay);
    t.join();
}

#define CH(fp) (CalllaterHandler)(&fp)

class Object {
    
public:
    SayHi sayHi;
};

class Hello: public Object {
    
public:
    Hello() {
//        sayHi = (SayHi)&Hello::HellloSayHi;
//        
//        (this->*sayHi)();
        
        calllater(this, CH(Hello::HellloSayHi), 3);
    }
    
    void HellloSayHi() {
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Hello *h = new Hello();
    delete h;
    
    return 0;
}
