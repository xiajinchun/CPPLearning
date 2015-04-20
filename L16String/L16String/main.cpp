//
//  main.cpp
//  L16String
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string str;
    str += "Hello";
    str += "World";
    
    
    std::cout << str << "\n";
    
    stringstream ss;
    ss << "Hello ";
    ss << 200;
    ss << " ";
    ss << 2.5;
    
    ss << " Hello " << "xiajinchun " << 1000;
    
    std::cout << ss.str() << "\n";
    
    return 0;
}
