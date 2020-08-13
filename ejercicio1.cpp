// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int euclides(int m, int n){
    //Base case
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    
    if (m > n)
        return euclides(m%n, n);
    else 
        return euclides(m, n%m);
}

int main(){
    //Testing
    int a = 3;
    int b = 6;
    int ans = euclides(a,b);
    std::cout << ans << std::endl;

    return 0;
}