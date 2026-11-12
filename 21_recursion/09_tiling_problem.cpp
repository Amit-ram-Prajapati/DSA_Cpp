#include <iostream>
using namespace std;

// 2x1 = 1 and 2x0 = 1 

int tilingP(int n ){ // 2xn
    if(n == 1 || n == 0){
        return 1;
    }
    // vertical
    int ans = tilingP(n - 1);

    // horizontal
    int ans1 = tilingP(n - 2);

    return ans + ans1;
}

int main()
{
    cout << tilingP(5);
    return 0;
}