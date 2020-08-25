#include <iostream>

int sumaRecursiva(int n){
    if (n == 1)
        return 1;
    return n + sumaRecursiva(n-1);
}

int main(){
    int a = 4;
    std::cout << sumaRecursiva(a);
}