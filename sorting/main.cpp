//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Sort.h"
#include "mytimer.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
    //Creating random vector
    srand(time(NULL));
    std::vector <int> v;
    for (int i = 0; i<10; i++){
        v.push_back(rand()%100);
    }
    
    SelectionSort <int> s;
    s.sort(v);
    
    BubbleSort <int> b;
    b.sort(v);
    
    InsertionSort<int> i;
    i.sort(v);

    MergeSort <int> m;
    m.sort(v, 0, 9);

    QuickSort<int> q;
    q.sort(v, 0, 9);

    return 0;
}