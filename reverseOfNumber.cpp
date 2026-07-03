#include<math.h>
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<" enter your number";
    cin>>n;

    int ans=0;
    int i=0;
    while (n!= 0){
        int digit = n%10;
        ans = (10*ans)+digit;
        n = n/10;
        i++;
    }
    cout<<"answer is : "<<ans<<endl;
    return 0;
}