// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int sumaDirecta(int n){
    return n*(n+1)/2;
}

int main(){
    int a = 4;
    std::cout << sumaDirecta(a);
}