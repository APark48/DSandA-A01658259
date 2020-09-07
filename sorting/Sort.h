//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once
#include <vector>
#include <cstdlib>

//Sorter class used in TC1031
template <typename T>
class Sorter
{
    public:
    Sorter() {};
    ~Sorter() {};

    void swap(int i, int j, std::vector<T> &arr)
    {
        T aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
    };

    virtual void sort(std::vector<T> &arr) {};
};


template <typename T>
void swap(T i, T j, std::vector <T> arr){
    T temp = arr.at(i);
    arr.at(i) = arr.at(j);        
    arr.at(j) = temp;
}

template <typename T>
class SelectionSort:public Sorter<T>{
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
        Sorter<T>::swap(i,smallest,arr);
        //Once j loop breaks, smallest is i once again
        }
    }
};

template <typename T>
class BubbleSort:public Sorter<T>{
public:
    BubbleSort(){};
    ~BubbleSort(){};

    //Sorting function
    void sort(std::vector<T> &arr)
    {
        for (int i = 0; i < arr.size(); i++){
            for (int j = 0; j < arr.size() - i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    Sorter<T>::swap(j, j+1, arr);
                }
            }
        }        
    }
};

template<typename T>
class InsertionSort{
public:
    InsertionSort(){};
    ~InsertionSort(){};

    //Sorting function
    void sort(std::vector <T> &arr){
        for (size_t i = 1; i<arr.size(); i++){
            T value = arr.at(i);
            int index = i;
            while (index > 0 && arr.at(index-1) > value){
                arr.at(index) = arr.at(index-1);
                index = index-1;
            }
            arr.at(index) = value;
        }
    }
};

template<typename T>
class MergeSort{
public:
    MergeSort(){};
    ~MergeSort(){};

    //Merge function
    void merge(std::vector<T>& v, T l, T mid, T r){
        //Declaring sizes for our two vectors, left and right
        int size1 = mid-l+1;
        int size2 = r-mid;

        //Creating vectors
        std::vector<T> left(size1);
        std::vector<T> right(size2);
  
        for(size_t i = 0; i < size1; i++){
            left.at(i) = v.at(l+i);
        }
        for(size_t j = 0; j < size2; j++){
            right.at(j)=v.at(mid+j+1);
        }
  
        int i=0,j=0;
        int k;
        for(k = l; k <= r && i < size1 && j < size2; k++){
            if(left.at(i) <= right.at(j)){
            v.at(k) = left.at(i);
            i++;
            }
            else {
            v.at(k) = right.at(j);
            j++;
            }
        }
  
        for(i = i; i < size1; ++i){
            v.at(k) = left.at(i);
            k++;
        }
  
        for(j = j; j < size2; j++){
            v.at(k) = right.at(j);
            k++;
        }
    }
  
    //Sorting function
    void sort(std::vector<int> &v, int l, int r){
        if(l < r){
        int mid = (l+r)/2;
        sort(v, l, mid);        
        sort(v, mid+1, r);
        merge(v, l, mid, r);
        }
    }
};

template <typename T>
class QuickSort:public Sorter <T>{
public:
    QuickSort(){};
    ~QuickSort(){};

    int part(std::vector <T> &arr, int smallest, int highest){
        int pIndex = smallest+ (highest-smallest) /2;
        int pValue = arr.at(pIndex);
        int i = smallest, j = highest;
        while (i <= j){
            while (arr.at(i) < pValue){
                i++;
            }
            while (arr.at(j) > pValue){
                j--;
            }
            if (i <= j){
                Sorter<T>::swap(i, j, arr);
                i++;
                j--;
            }
        }
        return i;
    }

    //Sorting function
    void sort(std::vector<T> &arr, int smallest, int highest){
        if (smallest < highest){
            int partIndex = part(arr, smallest, highest);

            sort(arr, smallest, partIndex-1);
            sort(arr, partIndex+1, highest);
        }
    }
    
};
