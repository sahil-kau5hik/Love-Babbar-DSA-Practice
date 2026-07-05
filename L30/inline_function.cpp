#include<iostream>
using namespace std;

//inline function -> jab ham function lo call krte h to stack me new function store hota h 
//and jo vo variable use krta h unki copy create krta h jisse performance pr asar pdta h , 
//uske liye inline function use krte h ye is problem ko solve krta h and macros ki trah kam krta h

inline int getMax(int& a, int& b){
    return (a>b ? a:b);
}
 
int main() {
    int a=1,b=2;
    int ans = getMax(a,b);
    cout<<ans <<endl;
     
    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout<<ans <<endl;
    return 0;
}