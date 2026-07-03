#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}

void swapAlt( int arr[], int n){
    for (int i = 0; i < n-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
    cout<<endl;
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main() {
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    printArray(arr,n);  
    // reverseArray(arr,n);
    swapAlt(arr,n);
    printArray(arr,n);
    
    return 0;
}