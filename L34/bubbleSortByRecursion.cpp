#include<iostream>
using namespace std;

// bubble sort by recursion 

void sortArray(int *arr,int n){
    //base case -> already sorted
    if(n == 1 || n == 0){
        return ;
    }

    for(int i = 0; i < n -1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr,n-1);
}
 
int main() {
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};

    sortArray(arr,10);

    for(int i = 0; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}