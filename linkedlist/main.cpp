//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "LinkedList.cpp"

int main(){
    //Creating nodes
    Node<int> n1(3);
    Node<int> n2(5);
    Node<int> n3(1);
    Node<int> n4(2);

    LinkedList<int> head(&n1); // Setting n1 as head node 
    
    // Function testing: 
    head.push(&n2); // Push test
    head.push(&n3);
    head.prepend(&n4); // Prepend test
  
    std::cout << head.isEmpty(); //Checking if list is empty 
    std::cout << std::endl; // Printing new line to make any other printing function start on a different line
    head.print(); // Printing list test
    std::cout << std::endl;

    //head.deleteList(); // Deleting list test
    //std::cout << head.isEmpty(); // Double checking if isEmpty() functions correctly
    //std::cout << std::endl;

    head.reverse(); // Reversing list test
    head.print();

    return 0;
}
