#include<iostream>
using namespace std;

void merge(int *arr, int s , int e){
    int mid = s + (e-s)/2;

    int len1 = mid -s +1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values 
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    // merge 2 sorted array
    int ind1 = 0;
    int ind2 = 0;
    k = s;

    while (ind1<len1 && ind2 < len2){
        if(first[ind1] < second[ind2]){
            arr[k++] = first[ind1++];
        }
        else{
            arr[k++] = second[ind2++];
        }
    }

    //remaining elements of first array if any
    while(ind1 < len1){
        arr[k++] = first[ind1++];
    }

    //remaining elements of second array if any
    while(ind2 < len2){
        arr[k++] = second[ind2++];
    }

}

void mergeSort(int *arr, int s, int e){
    if (s >= e){
        return;
    }

    int mid = s + (e-s)/2;

     // left part
     mergeSort(arr,s,mid);

     // right part
     mergeSort(arr,mid+1,e);

     // merge
     merge(arr,s,e);
}
 
int main() {
    int arr[5] = {1,3,5,2,4};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}