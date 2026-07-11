#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    //BASE CASE
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int sum = arr[0] + getSum(arr+1,size-1);
    return sum;
}
 
int main() {
    int arr[5] = {1,2,3,4,8};
    int ans = getSum(arr,5);

    cout<<"Sum is "<<ans<<endl;
    return 0;
}