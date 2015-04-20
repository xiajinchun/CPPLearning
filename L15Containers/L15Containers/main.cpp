//
//  main.cpp
//  L15Containers
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace::std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    list
    std::list<std::string> l;
    l.push_back("Hello");
    l.push_back("xiajinchun");
    
    for (std::list<std::string>::iterator it = l.begin(); it != l.end(); it ++) {
        std::cout << *it << "\n";
    }
    
//    map
    std::map<std::string, std::string> m;
//    m.insert(std::pair<string, string>("hello", "Hello xiajinchun"));
//    m.insert(pair<string, string>("name", "Jinchun Xia"));
//    cout << m.at("hello") << "\n";
    
//    也可以通过 map 里面的重载运算符来直接存取数据
    m["name"] = "Jinchun Xia";
    cout << m["name"] << "\n";


    return 0;
}
