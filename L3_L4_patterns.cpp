#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    // int i=1;
    // while (i<=n){
    //     int j=1;

    //     while (j<=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    int i=1,count=1;
    
    while (i<=n){
       //1st triangle
       int row = i;
       while (row <= n) {
        cout<<row<<" ";
        row++;
       }

       //2nd triangle 
       int col = 1;
       while (col < i) {
        cout<<"* ";
        col++ ;
       }

       //3rd triangle
       int th = 1;
       while (th < i) {
        cout<<"* ";
        th++ ;
       }

       //4th triangle 
       int fh = n-i+1;
       while (fh != 0){
        cout<<fh<<" ";
        fh-- ;
       }

           
        cout<<endl;
        i +=1;
    }

    return 0;
}