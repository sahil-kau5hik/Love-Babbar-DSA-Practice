#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    for(int i = 0; i<n-1;i++){
        int min = i;

        for(int j = i+1;j < n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
 
int main() {
    int arr[9] = {1,3,5,7,9,2,4,6,8};
    selectionSort(arr,9);
    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}