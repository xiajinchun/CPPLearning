//
//  main.cpp
//  L01OOP
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "People.h"

/* 
class People {
    
public:
    void sayHello() {
        printf("Hello CPP\n");
    }
};
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    
    People *p = new People();
    p->sayHello();
    
    delete p;
    
    return 0;
}
