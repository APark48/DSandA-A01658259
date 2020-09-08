//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

//Sorting functions declaration
void selectionSort(std::vector<int> &arr);
void swap(std::vector <int> &arr, int i, int j);
void bubbleSort(std::vector<int> &arr);
int pivot(std::vector<int> &arr, int low, int high);
void quickSort(std::vector<int> &arr, int low, int high);

//Search functions declaration
void sequentialSearch(std::vector <int> &arr);
void binarySearch(std::vector <int> &arr, int low, int high);

int main(){
    srand(time(NULL));

    // std::cout << "Which sorting do you want to do?" << std::endl;
    // std::cout << "1. Selection Sort\n2. Bubble Sort\n3. Quick Sort" << std::endl;
    // std::cout << "Enter number: ";
    // int choice;
    // std::cin >> choice;
    std::cout << "Enter vector size: ";
    int size;
    std::cin >> size;
    std::cout << "Generating random vector...";
    std::cout << std::endl;
    std::vector <int> arr;
    for (int i = 0; i<=size; i++){
        arr.push_back(rand()%1000);
    }
    
    bubbleSort(arr);
    for (auto i : arr){
        std::cout << i << " ";
    }

    return 0;
}

//Swapping function
void swap(std::vector <int> &arr, int i, int j){
    int temp = arr.at(i);
    arr.at(i) = arr.at(j);
    arr.at(j) = temp;
}

//Selection sort function
void selectionSort(std::vector <int> &arr){
    for (int i = 0; i < arr.size()-1; i++){
        int smallest = i;
        for (int j = i+1; j < arr.size(); j++){
            if (arr.at(j) < arr.at(smallest)){
                smallest = j;
            }
        }
        swap(arr, smallest, i);
    }
}

//Bubble Sort
void bubbleSort(std::vector <int> &arr){
    for (int i = 0; i < arr.size()-1; i++){
        for (int j = 0; j < arr.size()-1; j++){
            if (arr.at(j) > arr.at(j+1)){
                swap(arr, j, j+1);
            }
        }
    }
}

