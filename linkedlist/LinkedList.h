//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once
#include "Node.h"

template<typename T>
class LinkedList{
private:
    Node<T>* head;
public:
    LinkedList(){
        head = nullptr;
    }
    LinkedList(Node<T>* head){
        this->head = head;
    }

    //Essential functions
    bool isEmpty();
    void push(Node<T>* newNode);
    T prepend(Node<T>* newNode);
    void print();

    //Functions
    int count(T target); // Function to count total elements in linked list
    void deleteList(); // Function to eliminate list
    //void sortedInsert(Node<T>* newNode); // Function that once the list has been sorted, insert value in correct sorted order
    void reverse(); // Function to reverse linked list
    //void removeDuplicates(); // Function to remove duplicates in a list
};

