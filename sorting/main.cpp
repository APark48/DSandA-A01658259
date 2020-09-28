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
    for (int i = 0; i<100000; i++){
        v.push_back(rand()%100000);
    }
    
    //Selection Sort
    DECLARE_TIMING(s);
    START_TIMING(s);
    SelectionSort <int> s;
    s.sort(v);
    STOP_TIMING(s);
    SHOW_TIMING(s, "Selection Sort: ");
    
    //Bubble Sort
    DECLARE_TIMING(s1);
    START_TIMING(s1);
    BubbleSort <int> b;
    b.sort(v);
    STOP_TIMING(s1);
    SHOW_TIMING(s1, "Bubble Sort: ");

    //Insertion Sort
    DECLARE_TIMING(s2);
    START_TIMING(s2);
    InsertionSort<int> i;
    i.sort(v);
    STOP_TIMING(s2);
    SHOW_TIMING(s2, "Insertion Sort: ");

    //Merge Sort
    DECLARE_TIMING(s3);
    START_TIMING(s3);
    MergeSort <int> m;
    m.sort(v, 0, 9);
    STOP_TIMING(s3);
    SHOW_TIMING(s3, "Merge Sort: ");

    //Quick Sort
    DECLARE_TIMING(s4);
    START_TIMING(s4);
    QuickSort<int> q;
    q.sort(v, 0, 9);
    STOP_TIMING(s4);
    SHOW_TIMING(s4, "Quick Sort: ");

    return 0;
}