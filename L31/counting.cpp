#include<iostream>
using namespace std;
 
void printCounting(int n){
    //base case
    if(n == 0){
        cout<<endl;
        return;
    }
    //print value
    cout<<n <<endl;       // -> for decreasing order

    //recursive case
    printCounting(n-1);

    //print value
    cout<<n <<endl;      // -> for increasing order
}

int main() {
    int n; 
    cout<<"enter velue of n : ";
    cin>>n;

    printCounting(n);
    return 0;
}