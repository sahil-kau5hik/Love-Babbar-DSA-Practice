#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        for (int j = i+1 ; j < n; j++)
        {
            if (key == arr[j]){cout<<arr[j]<<" ";}
        }
        
    }
    
}

void unique(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        for (int j = i+1 ; j < n; j++)
        {
            if (key == arr[j]){arr[i]=0;arr[j]=0;}
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0){cout<<arr[i]<<" ";}
    }
    
    
}

void intersection(int arr[] , int m, int brr[] , int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==brr[j]){cout<<arr[i]<<" ";}
        }
        
    }
    
}

void pairSum(int arr[],int n, int target){
    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        for (int j = i+1; j < n-1; j++)
        {
            if (arr[j]==rem){cout<<arr[i] <<" + "<<arr[j]<<" = "<< target<<endl;}
        }       
    }   
}

void tripletSum(int arr[], int n , int target){
    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        for (int j = 1; j < n; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if( arr[j] +arr[k] > rem) {break;}
                else if (arr[j] +arr[k] == rem){cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<target<<endl;} 
            }           
        }        
    }    
}

void SortBit(int arr[], int n){
    //*************************************method 1 *************** */
    // int count=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==0){count++;}
    // }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i<count){arr[i]=0;}
    //     else {arr[i]=1;}
    // } 
    
    //********************************method 2*************************** */

    int start=0;
    int end=n-1;
    while(start<end){
        if( (arr[start]==0) && (arr[end]==0) ){start++;}
        else if ( (arr[end]==1) && (arr[start]==1) ) {end--;}
        else if ( (arr[start]==0) && (arr[end]==1) ) {start++;end--;}
        else {swap(arr[start],arr[end]);}
    }
}

void sum(int arr[], int size){
    int sum = 0;
    for (int i=0; i < 10 ; i++){
        sum += arr[i];
    }
    cout<<"sum is "<<sum;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main() {
    int arr[10] = {1,2,3,14,5,6,7,12,9,10};
    int brr[5] = {2,4,6,8,10};
    int crr[10] = {0,1,0,1,1,1,0,0,1,0};
    // sum(arr,10);
    // duplicate(arr,10);
    // unique(arr,10);  
    // intersection(arr,10,brr,5);
    // pairSum(arr,10,7);
    // tripletSum(arr,10,10);
    // SortBit(crr,10);
    // printArray(crr,10);
    return 0;
}