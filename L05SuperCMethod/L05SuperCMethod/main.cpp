//
//  main.cpp
//  L05SuperCMethod
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    Man *m = new Man(20);
    
    printf("age: %d\n", m->getAge());
    return 0;
}
