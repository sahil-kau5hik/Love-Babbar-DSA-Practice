#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<< "enter the number : ";
    cin>>n;
    // int s=0,p=1;
    // while(n != 0){
    //     int a = n%10;
    //     s = s+a ;
    //     p = p*a ;
    //     n = n/10;
    // }
    // cout<<"Result : "<<p-s;


    int count = 0;
    while (n !=0){
        if (n&1){
            count++;
        }

        n = n>>1;
    }
    cout<< " No of 1's in given number is : "<<count<<endl;

    return 0;
}