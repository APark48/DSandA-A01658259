// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int digitSum(int a){
    //Base case
    if (a == 0)
        return a;
    return (a%10 + digitSum(a/10));
}

int main(){
    //Testing
    int a = 123;
    int ans = digitSum(a);
    std::cout << ans << std::endl;

    return 0;
}