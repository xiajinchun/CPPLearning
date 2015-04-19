//
//  main.cpp
//  L03Classes
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    Man *m = new Man();
    m->sayHello();
    
    printf("age: %d     sex: %d", m->getAge(), m->getSex());
    
    delete m;
    return 0;
}
