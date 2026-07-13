#include<iostream>
using namespace std;

int power(int a, int b){
    //base  case 
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    int ans = power(a,b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
 
int main() {
    // we have two input a and b and caculate a**b ( a ki power b)
    //bruthforce approach
    // int ans =1;
    // int a =3;
    // int b = 3;
    // for(int i = 0; i < b; i++){
    //     ans = ans * a;
    // }
    // cout<<ans<<endl;

    //another method -> todte chlo if power is even half and half power or if odd one power bahar nikal lo and baki ko half half kr do
    //eg. 2**4 -> 2^2 * 2^2 , 2^3 -> 2 * 2^2


    int a,b;
    cout<<"enter value of a and b : ";
    cin>>a>>b;
    int ans = power(a,b);
    cout<<a<<"^"<<b<<" = "<<ans;

    return 0;
}