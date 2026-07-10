#include<iostream>
using namespace std;

double posPower(int n){
    //base case
    if (n == 0){
        return 1;
    }

    //resursive call
    return (2 * posPower(n-1));
}
 
int main() {
    int c;
    cout<<"enter value of c : ";
    cin>>c;

    if(c >= 0){
        double p = posPower(c);
        cout<<"value of 2 ki power "<<c<<" is "<<p;
    }
    else{
        int cp = -c;
        double p = posPower(cp);
        cout<<"value of 2 ki power "<<c<<" is "<<1/p;
    }
    return 0;
}