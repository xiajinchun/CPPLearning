//
//  main.cpp
//  L04CMethod
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>

class Object {
    
public:
    Object() {
        printf("Create Object\n");
    }
    
//  析构方法
    ~Object() {
        printf("Delete Objcet\n");
    }
};

void runObject() {
//    {
//    obj 有效范围在{}内部，一旦 {} 代码块执行完毕，obj 即被销毁
        Object obj;
//    }
    printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //    Object *obj = new Object();
    //    delete obj;
    
    runObject();
    
    printf("end\n");
    
    return 0;
}
