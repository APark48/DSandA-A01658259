//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Search.h"
#include "Search.cpp"
#include <vector>
#include <iostream>

int main(){
    std::vector <int> v = {1,2,3,4};
    Search s=v;
    std::cout << s.sequentialSearch(2);

    return 0;
}