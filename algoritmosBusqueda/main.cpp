//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Search.h"
#include <vector>
#include <iostream>

template <typename T>
int main(){
    std::vector <T> v = {1,2,3,4};
    Search s(v);
    std::cout << s.sequentialSearch(2);

    return 0;
}