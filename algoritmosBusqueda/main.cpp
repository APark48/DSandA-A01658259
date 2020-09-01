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
    int result1, result2, result3, result4;
    Search <int> s(num);

    DECLARE_TIMING(time1);
    START_TIMING(time1);
    result1 = s.sequentialSearch();
    STOP_TIMING(time1);
    std::cout << result1 << std::endl;
    SHOW_TIMING(time1, "Sequential search: ");

    DECLARE_TIMING(time2);
    START_TIMING(time2);
    result2 = s.sequentialSearch1();
    STOP_TIMING(time2);
    std::cout << result2 << std::endl;
    SHOW_TIMING(time2, "Sequential search 1: ");

    DECLARE_TIMING(time3);
    START_TIMING(time3);
    result3 = s.sequentialSearch2(0, 100000, 10000);
    STOP_TIMING(time3);
    std::cout << result3 << std::endl;
    SHOW_TIMING(time3, "Sequential search 2: ");

    DECLARE_TIMING(time4);
    START_TIMING(time4);
    result4 = s.binarySearch(0, 100000);
    STOP_TIMING(time4);
    std::cout << result4 << std::endl;
    SHOW_TIMING(time4, "Binary search: ");

    return 0;
}