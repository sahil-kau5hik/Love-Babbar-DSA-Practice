#include<iostream>
#include<cmath>
using namespace std;
 
int main() {
    int n,a=0;
    cout<< "Enter the value of number ";
    cin>>n;

    // for (int i = 2; i < n; i++)
    // {  
    //    if (n==1) {cout<<"neighter prime nor composite";} 
    //    else if (n%i==0) {a++;}
    // }

    for (int i = 2; i <= sqrt(n); i++)
    {  
       if (n==1) {cout<<"neighter prime nor composite";} 
       else if (n%i==0) {a++;}
    }

    if (a>0) {cout <<"Composite";}
    else { cout <<"prime ";}
    
    return 0;
}