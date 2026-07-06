#include<iostream>
using namespace std;

bool check(int arr[], int n){
    int k = 0;
    for(int i = 1 ; i< n ; i++){
        if(arr[i-1] > arr[i]){
            k++;
        }
    }

    if(arr[n-1] > arr[0]){
        k++;
    }

    return (k <= 1);
} 
 
int main() {
    int arr[5] = {2,4,6,1,3};

    bool a = check(arr,5);
    cout<<"arr is rotated and sorted -> "<<a<<" "<<endl;
    return 0;
}