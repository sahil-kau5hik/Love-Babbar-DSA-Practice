#include<iostream>
using namespace std;

// check aarray is sorted or not by recursion

bool isSorted(int arr[], int size){
    //base case
    if(size == 0){
        return 1;
    }
    if(size == 1){
        return 1;
    }

    //processing part
    if(arr[0] <= arr[1]){
        return isSorted(arr+1,size-1);
    }
    else{
        return 0;
    }
    
}
 
int main() {
    int arr[5] = {1,2,3,4,8};
    bool ans = isSorted(arr,5);

    if(ans){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"not sorted "<<endl;
    }

    return 0;
}