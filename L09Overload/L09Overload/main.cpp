//
//  main.cpp
//  L09Overload
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>

class  Hello {
    
public:
    void sayHello() {
        printf("Hello xiajinchun\n");
    }
    
    void sayHello(std::string name) {
        std::string str = "Hello ";
        str+=name;
        
        std::cout << str << "\n";
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Hello *h = new Hello();
    
//    std::string name = "chunchun";
//    h->sayHello((char*)name.c_str());
    
    h->sayHello();
    h->sayHello("chunchun");
    
    return 0;
}
