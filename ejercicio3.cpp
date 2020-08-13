// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int sum(int a[][2]){
    int total = 0;
    for (int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            total += a[i][j];
        }
    }
    return total;
}

int sum2(int a[][2], int n){
    //Base case
    if (n == 0){
        return n;
    }
    int total = 0;
    for (int i = 0; i<n/2; i++){
        for(int j = 0; j<n/2; j++){
            total += a[i][j];
        }
    }
    return total;
}

int main(){
    //Testing
    int a[2][2] = {{1,2},{3,4}};
    int ans = 0;
    ans = sum2(a,4);
    std::cout << ans << std::endl;

    return 0;
}