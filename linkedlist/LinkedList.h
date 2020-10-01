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
    void append(Node<T>* newNode);
    T prepend(Node<T>* newNode);
    void print();

    //Functions
    int count(T target);
    void deleteList();
    void sortedInsert(Node<T> * newNode);

};

