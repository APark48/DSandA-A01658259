//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once

template<typename T>
class Node{
public:
    T value;
    Node* next;

    Node(){
        next = nullptr;
    }
    Node(T value){
        this->value = value;
        next = nullptr;
    }
};