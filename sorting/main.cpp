//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Sort.h"
#include "mytimer.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    std::vector <int> v;
    for (int i = 0; i<10; i++){
        v.push_back(rand()%100);
    }
    
    SelectionSort <int> s;
    s.sort(v);
    for (auto i:v){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    BubbleSort <int> b;
    b.sort(v);
    for (auto i:v){
        std::cout << i << " ";
    }

    

    return 0;
}