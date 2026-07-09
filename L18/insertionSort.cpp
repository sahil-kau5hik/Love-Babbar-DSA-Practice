#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i = 0 ;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j] > temp ){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
 
int main() {
     int arr[9] = {1,3,5,7,9,2,4,6,8};

    insertionSort(arr,9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    return 0;
}