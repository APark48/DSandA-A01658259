//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const int row = 5;
const int column = 6;

//Solutions
//1. B
//2. A,D,E
//3. 

int mlognSearch(int array[row][column]);
int binarySearch(std::vector <int>, int, int);
int mplusnSearch(int array[row][column]);

int main(){
    int array[row][column] = {
    {1,1,1,0,1,1},
    {1,1,0,0,0,1},
    {0,1,0,0,0,1}, 
    {0,1,0,0,0,1},
    {0,0,0,0,0,1}
    };

    std::cout << mlognSearch(array) << std::endl;
    std::cout << mplusnSearch(array) << std::endl;

    return 0;
}

// O(mlogn) time complexity
int mlognSearch(int array[row][column]){
    int index = 0;
    int result;
    std::vector <int> sorted;
    while (index < row){ 
        for (int i = 0; i < column; i++){
            sorted.push_back(array[index][i]);
        }
        std::sort(sorted.begin(), sorted.end());
        result = binarySearch(sorted, 0, 6);
    
        //if result is equal to -1 assume there are no 0s and break while loop
        // else, index++ and check through each row
        if (result != -1){ 
            index++;
            continue;
        }
        else {
            break;
        }
    }
    return result;
}

int binarySearch(std::vector <int> sorted, int first, int last){
    int mid = ceil((first+last)/2);
    if (sorted.at(mid) == 0){
        return mid;
    }
    else if (sorted.at(mid) < 0){
        return binarySearch(sorted, mid, last);
    }
    else {
        return binarySearch(sorted, first, mid);
    }
    return -1;
}

//O(m+n)
int mplusnSearch(int array[row][column]){
    int index = 0;
    int tempColumn;

    //Loop to iterate through each row O(n) 
    for (int i = 0; i < column; i++){
        if (array[index][i] == 0){
            tempColumn = i;
        }
    }
    //Loop to iterate through each column O(m)
    for (int j = 0; j < row; j++){
        if (array[j][tempColumn] == 0){
            return tempColumn;
        }
        else {
            return -1;
        }
    }
}