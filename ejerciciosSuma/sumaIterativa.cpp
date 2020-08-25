#include <iostream>

int sumaIterativa(int n){
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
        total += count;
    }
    return total;
}

int main(){
    int a = 3;
    std::cout << sumaIterativa(a);
}