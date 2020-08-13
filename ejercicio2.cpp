// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>
#include <vector>

int sum(std::vector <int> v, int n){
    //Base case
    if (v.size() == 0)
        return 0;
    return (sum(v, n-1) + v.at(n-1));
}

int main(){
    std::vector <int> v {1,2,3,4,5};
    int n = 5;
    int ans = sum(v, n);
    std::cout << ans << std::endl;

    return 0;
}