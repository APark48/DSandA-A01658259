//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once
#include <vector>
#include <cstdlib>

//Swap function
template <typename T>
void swap(T i, T j, std::vector <T> &arr){
    T temp = arr.at(i);
    arr.at(i) = arr.at(j);        
    arr.at(j) = temp;
}

template <typename T>
class SelectionSort{
public:
    SelectionSort(){};
    ~SelectionSort(){};

    //Sorting function
    void sort(std::vector <T> &arr){
        //Variable to store smallest value
        T smallest;
        for (size_t i = 0; i < arr.size()-1; i++){
            smallest = i;
            for (size_t j = i+1; j < arr.size(); j++){
                if (arr.at(smallest) > arr.at(j)){
                //While looping through each element, make j value the smallest
                smallest = j;
            }
        }
        swap(i,smallest,arr);
        //Once j loop breaks, smallest is i once again
        }
    }
};

template <typename T>
class BubbleSort{
public:
    BubbleSort(){};
    ~BubbleSort(){};

    //Sorting function
    void sort(std::vector<T> &arr)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            for (size_t j = 0; j < arr.size() - i-1; j++)
            {
                if (arr[j] > arr[j+1]) {
                    swap(j, j+1, arr);
                }
            }
        }        
    }
};

template<typename T>
class InsertionSort{
public:
    InsertionSort();
    ~InsertionSort();

    //Sorting function
    void sort(std::vector <T> &arr){

    }
};