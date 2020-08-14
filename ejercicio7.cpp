// Developed by Alfredo Jeong Hyun Park (A01658259)
#include <iostream>

int chocolate(int m, int p, int w){
    //Base case
    if (m < p)
        return 0;
    
    int totalChocolate = m/p;
    
    //extra = totalChocolate/w
    //extra = extra/w
    // until we get to 0
}

int main(){
    int m = 16;
    int p = 2;
    int w = 2;
    int ans = chocolate(m,p,w);
    std::cout << ans << std::endl;

    return 0;
}