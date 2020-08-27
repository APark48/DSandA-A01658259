//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include <vector>
#pragma once

template <typename T> 
class Search{
private:
    std::vector <T> elements;
public:
    //Constructors
    Search();
    Search(std::vector <T> elements){
        this->elements = elements;
    }
    ~Search();

    //Functions
    int sequentialSearch(int n);
    int sequentialSearch1();
    int sequentialSearch2();
    int binarySearch();
};