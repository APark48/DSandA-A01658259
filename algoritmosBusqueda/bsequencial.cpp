//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.
#include <iostream>
#include <vector>

int busquedaSequencial(std::vector <int> v, int num){
    for (auto i:v){
        if (v.at(i) == num)
            return i;
        else
            return -1;
    }
}

int main(){
    std::vector <int> v = {1,2,3,4};
    std::cout << busquedaSequencial(v, 2);
    
}