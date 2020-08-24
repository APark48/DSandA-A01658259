// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>
#include <vector>

int sum(std::vector <int> v, int n){
    //Base case
    if (n == 0)
        return 0;
    return (sum(v, n-1) + v.at(n-1));
}

int main(){
    std::vector <int> v {2,3};
    int n = 2;
    int ans = sum(v, n);
    std::cout << ans << std::endl;

    return 0;
}