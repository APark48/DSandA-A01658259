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
int part(std::vector<int> &arr, int low, int high);
void quickSort(std::vector<int> &arr, int low, int high);

//Search functions declaration
int sequentialSearch(std::vector <int> &arr, int num);
int binarySearch(std::vector <int> &arr, int low, int high, int num);

//Print function
void print(std::vector <int> &arr);

int main(){
    srand(time(NULL));
    int sortChoice, size, num, searchChoice;
    const int low = 0;

    std::cout << "Enter vector size: ";
    std::cin >> size;

    //Generating random vector with random values from 0 to 100
    std::vector <int> arr;
    for (int i = 0; i<size; i++){
        arr.push_back(rand()%100);
    }
    std::cout << "\nRandom vector succesfully generated." << std::endl;

    //Making user select which sorting does the user want to perform
    std::cout << "\nChoose Which sort to perform" << std::endl;
    std::cout << "1. Selection Sort\n2. Bubble Sort\n3. Quick Sort" << std::endl;
    std::cout << "Enter number: ";
    std::cin >> sortChoice;
    
    switch (sortChoice){
    case 1:
        selectionSort(arr);
        break;
    case 2:
        bubbleSort(arr);
        break;
    case 3:
        quickSort(arr, low, size-1);
        break;
    default:
        std::cout << "INVALID OPTION.";
        break;
    }
    std::cout << "\nVector has been sorted successfully." << std::endl;

    //Making user select which search does the user want to perform
    std::cout << "\nEnter number to search: ";
    std::cin >> num;
    std::cout << "Choose which search to perform" << std::endl;
    std::cout << "1. Sequential search\n2. Binary search" << std::endl;
    std::cout << "Enter number: ";
    std::cin >> searchChoice;

    switch (searchChoice){
    case 1:
        std::cout << sequentialSearch(arr, num) << std::endl;
        break;
    case 2:
        std::cout << binarySearch(arr, low, size, num) << std::endl;
        break;
    default:
        "INVALID OPTION.";
        break;
    }

    //Printing generated vector to show user
    std::cout << "Generated vector: ";
    print(arr);

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

int partition(std::vector <int> &arr, int low, int high)  
{  
    int pivot = arr.at(high); 
    int i = low - 1; 
    for (int j = low; j < high; j++){  
        if (arr.at(j) < pivot){  
            i++;  
            swap(arr, i, j);  
        }  
    }  
    swap(arr, i+1, high);  
    return (i + 1);  
}  

//Quick Sort
void quickSort(std::vector<int> &arr, int low, int high){
    if (low < high){
        int partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex-1);
        quickSort(arr, partIndex+1, high);
    }
}

//Sequential Search
int sequentialSearch(std::vector<int> &arr, int num){
    for (int i = 0; i < arr.size(); i++){
        if (arr.at(i) == num){
            return i;
        }
    }
    return -1;
}

//Binary search
int binarySearch(std::vector<int> &arr, int low, int high, int num){
  while (low <= high){
    int mid = (low+high)/2;
    if (arr.at(mid) == num)
      return mid;
    else if (arr.at(mid) < num)
      low = mid+1;
    else
      high = mid-1;
  }
  return -1;
}

//Printing function
void print(std::vector <int> &arr){
    for (auto i : arr){
        std::cout << i << " ";
    }
}