//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once
#include <vector>
#include <cstdlib>
#include <algorithm>

template <typename T> 
class Search{
private:
    std::vector <T> elements;
    T n;
public:
    //Constructors
    Search(T n){
        this->n = n;
        for (int i = 0; i<100000; i++){
            elements.push_back(rand()%100000);
        }
        std::sort(elements.begin(), elements.end());
    }

    //Functions
    T sequentialSearch(){
        //iterate through each element in vector and return index
        for (int i = 0; i<elements.size(); i++){
            if (elements.at(i) == n){
                return i;
            }
        }
        return -1;
    }

    T sequentialSearch1(){
        int flag = -1;
        for (int i = 0; i < elements.size(); i++){
            if (elements.at(i) == n) {
                flag = 1;
                return i;
            }
        }
        return flag;
    }

    T sequentialSearch2(T first, T last, T p){
        for (int i = first; i <= last; i+=p){
            if (elements.at(i) == n){
                return i;
            }
            else if (elements.at(i) > n){
                return sequentialSearch2(i-p, i, p/10);
            }
        }
        return -1;
    }

    T binarySearch(T first, T last){
        //check if last value is higher than first, if not we assume vector is not sorted
        if (last < first){
            return -1;
        }
        else {
            T mid = (first+last)/2;
            if (n == elements.at(mid)){
                return mid;
            }
            else if (n < elements.at(mid)){
                return binarySearch(first, mid);
            }
            else {
                return binarySearch(mid, last);
            }
        }
    }
};