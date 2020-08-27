//Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int main(){
    for (int i=0; i<6; i++){
        for(int j=0; j<i+1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}