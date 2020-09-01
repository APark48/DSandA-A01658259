//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Search.h"
#include <vector>
#include <iostream>
#include <ctime>
#include "Timer.h"

int main(){
    srand(time(NULL));
    int num = 10;
    Search <int> s(num);
    std::cout << s.binarySearch(0, 100000) << std::endl;

    return 0;
}