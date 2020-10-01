//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include "Node.h"

template <typename T>
class LinkedList{
private:
    Node<T>* head;
public:
    //Constructor and destructor
    LinkedList(){
        head = nullptr;
    }
    LinkedList(Node<T>* head){
        this->head=head;
    }
    ~LinkedList();

    //Functions
    void print();
    int count(T target);
    void deleteList();
    void sortedInsert(Node<T>* newNode);
    void removeDuplicates();
    void reverse();
};