//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "LinkedList.cpp"
#include <iostream>

int main(){
    Node<int> n1(3);
    Node<int> n2(3);
    Node<int> n3(3);
    Node<int> n4(3);

    LinkedList<int> head(&n1);
    //std::cout << head.isEmpty();
    head.append(&n2);
    head.append(&n3);
    head.append(&n4);
    head.print();
    std::cout << head.count(3);

    return 0;
}
