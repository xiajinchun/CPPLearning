//
//  main.cpp
//  L06SuperMethod
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "Man.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    
    Man *m = new Man(21);
//    m->sayHello();
    m->People::sayHello();
    
    return 0;
}
