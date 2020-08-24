// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int sum(int a[][2], int n){
    //Base case
    if (n == 0)
        return n;
    return ;
}

int main(){
    //Testing
    int a[2][2] = {{1,2},{3,4}};
    int ans = 0;
    ans = sum(a,4);
    std::cout << ans << std::endl;

    return 0;
}