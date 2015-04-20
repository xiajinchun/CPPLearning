//
//  People.h
//  L01OOP
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <stdio.h>

class People {
    
private:
    int age;
    int sex;
    
public:
    People();
    People(int age, int sex);
    int getAge();
    int getSex();
    
//  虚函数，让子类自动定义已经重写了的方法
    virtual void sayHello();
    
//  纯虚函数，类似父类的抽象方法
    virtual void eat() = 0;
};

#endif /* defined(__L01OOP__People__) */
