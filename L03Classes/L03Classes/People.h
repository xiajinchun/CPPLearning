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
    void sayHello();
};

#endif /* defined(__L01OOP__People__) */
