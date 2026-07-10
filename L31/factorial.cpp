#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if (n == 0){
        return 1;
    }

    if(n < 0){
        cout<<"enter positive value"<<endl;
        return 0;
    }

    //recurssion relation
    return (n * factorial(n-1));
}
 
int main() {
    int n;
    cout<<"enter value of n : ";
    cin>>n;

    int fact = factorial(n);
    cout<<"factorial of "<<n<<" is "<<fact;
    return 0;
}