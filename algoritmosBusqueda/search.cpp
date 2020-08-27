//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Search.h"

int Search::sequentialSearch(int n){
    for (auto i : elements){
        if (elements.at(i) == n){
            return i;
        }
        else {
            return -1;
        }
    }
}
int Search::sequentialSearch1();
int Search::sequentialSearch2();
int Search::binarySearch();