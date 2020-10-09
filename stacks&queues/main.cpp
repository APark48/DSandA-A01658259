//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

// A and B are playing a game. In this game, both of them are initially provided with a list of n numbers. (Both have the same list but their own copy).
//
// INPUT: 3 4 5 6 322 67 11 1
// A: 3 4 5 6 322 67 11 1
// B: 10 2 3 4 5 6 322 67 11
// O: 1 2 0
//
// Now, they both have a different strategy to play the game:
// 	- A picks the element from start of his list. QUEUE
// 	- B picks from the end of his list. STACK
//
// You need to generate the result in form of an output list.
// Method to be followed at each step to build the output list is:
//
// 	- If the number picked by A is bigger than B then this step's output is 1. 
// 		- B removes the number that was picked from their list.
//	
// 	- If the number picked by A is smaller than B then this step's output is 2. 
// 		- A removes the number that was picked from their list.
//
// 	- If both have the same number then this step's output is 0. 
// 		- Both A and B remove the number that was picked from their list.
//
// This game ends when at least one of them has no more elements to be picked i.e. when the list gets empty.
//
// Output the built output list.  
//
// Input format: First line consists of n numbers separated by space.
// Output format: Output the required output list.
//
// Sample input:
// 3
// 1 2 3
//
// Sample output:
// 2 2 0
//
// Explanation:
// 	1st step: A picks 1. B picks 3. B > A. So output is 2. A removes 1.
// 	2nd step: A picks 2. B picks 3. B > A. So output is 2. A removes 2.
// 	3rd step: A picks 3. B picks 3. B = A. So output is 0. A removes 3. B removes 3.
//
// 	Output list: [2, 2, 0]

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int size;

    std::cout << "Enter size of list: ";
    std::cin >> size;
    
    while (v.size() != size){
        int element;
        std::cout << "Add elements: ";
        std::cin >> element;
        v.push_back(element);
    }

    for (auto i:v){
        std::cout << i << " ";
    }
    
    return 0;
}