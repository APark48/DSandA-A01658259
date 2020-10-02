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
void LinkedList<T>::push(Node<T>* newNode){
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
// O(n) time complexity
// Iterate through each element in the list, make a temporary node object to store head node position once deleted
template<typename T>
void LinkedList<T>::deleteList(){
    Node<T>* tempNode;
    while (head != nullptr){
        tempNode = head->next;
        delete head;
        head = tempNode;
    }
    head = nullptr;
}

// Function to sort list and add new node
template<typename T>
void LinkedList<T>::sortedInsert(Node<T>* newNode){

}

//Function to reverse list
// O(n) time complexity
/* Create a 3 pointers that point to next, current and previous position.
Once current position reaches null we make previous as head node.
*/
template<typename T>
void LinkedList<T>::reverse(){
    Node<T>* previousNode = nullptr;
    Node<T>* currentNode = head;
    Node<T>* nextNode = nullptr;
    while (currentNode != nullptr){
        nextNode=currentNode->next;
        currentNode->next=previousNode;
        previousNode=currentNode;
        currentNode=nextNode;
    }
    head = previousNode;
}