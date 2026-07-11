#include<iostream>
using namespace std;

//codeStudio -> count ways to reach nth stairs 

int climbStairs(long long nstairs){
    //base case
    if(nstairs < 0){
        return 0;
    }
    if(nstairs == 0){
        return 1;
    }

    //recursive call
    int ans = climbStairs(nstairs - 1) + climbStairs(nstairs - 2);
    return ans;
}
 
int main() {
    long long nstairs;
    cin>>nstairs;

    climbStairs(nstairs);

    return 0;
}