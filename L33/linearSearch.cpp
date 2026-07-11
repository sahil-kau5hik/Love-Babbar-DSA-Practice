#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){
    //BASE CASE
    if(size == 0){
        return 0;
    }

    if(arr[0] == key){
        return 1;
    }
    else{
        return linearSearch(arr+1,size-1,key);
    }
}
 
int main() {
    int arr[5] = {1,2,3,4,8};

    bool ans = linearSearch(arr,5,7);

    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}