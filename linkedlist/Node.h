//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

template <typename T>
class Node{
private:
    T value;
    Node* next;
public:
    Node(){
        T value = NULL;
        next = nullptr;
    }
    Node(T value, Node *next){
        this->value=value;
        this->next=next;
    }
    ~Node();
};