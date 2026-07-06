#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i < n-1; i++){

        for(int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                //  int temp = arr[j];
                //  arr[j] = arr[j+1];
                //  arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main() {
    int n = 5;
    int arr[] = {4,9,1,5,2,};

    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}