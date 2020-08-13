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

int main(){
    //Testing
    int a[2][2] = {{1,2},{3,4}};
    int ans = 0;
    ans = sum(a);
    std::cout << ans << std::endl;

    return 0;
}