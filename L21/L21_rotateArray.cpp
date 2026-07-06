#include<iostream>
using namespace std;



void reverse(int arr[], int n, int k){
    int temp[n];
    for (int i = 0; i < n ; i++){
        temp[(i+k)%n] = arr[i];
    }

    for (int i = 0; i < n ; i++){
        cout<<temp[i]<<" ";
    }
}
 
int main() {
    int arr[5] = {1,2,3,4,5};
    int k;

    cout<<"enter the value of k : ";
    cin>>k;

    reverse(arr,5,k);
    return 0;
}