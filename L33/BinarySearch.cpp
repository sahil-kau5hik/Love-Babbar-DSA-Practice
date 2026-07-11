#include<iostream>
using namespace std;

bool binarySearch(int *arr, int st, int end, int key){
    //base case
    if(st>end){
        return 0;
    }

    int mid = st + (end - st)/2;

    if(key == arr[mid]){
        return 1;
    }

    if(key < arr[mid]){
        return binarySearch(arr,st,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,end,key);
    }
}
 
int main() {
    int arr[5] = {1,2,3,8,10};

    bool ans = binarySearch(arr,0,4,8);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}