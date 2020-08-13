// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int euclides(int m, int n){
    //Base case
    if (m <= 0)
        return n;
    return euclides(m%n, n);
}

int main(){
    //Testing
    int a = 20;
    int b = 10;
    int ans = euclides(a,b);
    std::cout << ans << std::endl;

    return 0;
}