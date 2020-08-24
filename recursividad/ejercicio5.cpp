// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int invert(int n){
    //Base case
    if (n < 10)
        return n;
    std::cout << n%10;
    invert(n/10);
}

int main(){
    //Testing
    int a = 123;
    int ans = invert(a);
    std::cout << ans << std::endl;

    return 0;
}