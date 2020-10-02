//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#pragma once
#include "LinkedList.h"
#include <iostream>

// Function to check if list is empty
// O(1) time complexity
template<typename T>
bool LinkedList<T>::isEmpty(){
    return head == nullptr;
}

// Function to add new node at the end of the list
// O(n) time complexity
template<typename T>
void LinkedList<T>::append(Node<T>* newNode){
    if (isEmpty()){
        head = newNode;
    }
    else {
        Node<T>* currentNode = head;
        while (currentNode->next != nullptr){
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

// Function to add new node at the start of the list
// O(1) time complexity
template<typename T>
T LinkedList<T>::prepend(Node<T>* newNode){
    if (isEmpty()){
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

// Function to print all node values
// O(n) time complexity
// Iterate through each node until reaching next pointing to null, printing each value
template<typename T>
void LinkedList<T>::print(){
    Node<T>* currentNode = head;
    while (currentNode != nullptr){
        std::cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }
}

// Function to count number of times that an element occurs in the list
// Iterate through the list while next is not equal to null and add in count if value is equal to target
// O(n) time complexity
template<typename T>
int LinkedList<T>::count(T target){
    int count = 0;
    Node<T>* currentNode = head;
    while (currentNode != nullptr){
        if (currentNode->value == target){
            count++;
        }
        currentNode=currentNode->next;
    }   
    return count;
}

// Function to delete every elements on the list
template<typename T>
void LinkedList<T>::deleteList(){
    Node<T>* currentNode = head;
    Node<T>* tempNode;
    while (currentNode != nullptr){
        tempNode = currentNode->next;
        delete currentNode;
        currentNode = nullptr;
        currentNode = tempNode;
    }
    head = nullptr;
}

// Function to sort list and add new node
template<typename T>
void LinkedList<T>::sortedInsert(Node<T>* newNode){

}