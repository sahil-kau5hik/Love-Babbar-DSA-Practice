#include<iostream>
#include<vector>
using namespace std;



// void rowWiseSum(int arr[][4], int row, int col){
//     cout<<"Row wise sum is : "<<endl;
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;

//         for (int col = 0; col < 4; col++){
//             sum += arr[row][col];
//         }
//         cout<<sum<<endl;
//     }    
// }

void colWiseSum(int arr[][4], int row, int col){
    cout<<"Col wise sum is : "<<endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++){
            sum += arr[row][col];
            // cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }    
}

void largestRowSum(int arr[][4], int row, int col){
    cout<<"Largest Row sum is : ";
    int maxi = INT8_MIN;
    int rowIndex = 0;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    } 
    cout<<maxi<<" "<<endl;   
    cout<<"At row index : "<<rowIndex<<" "<<endl;  
}

void largestColSum(int arr[][4], int row, int col){
    int maxi = INT8_MIN;
    int colIndex = 0;
    cout<<"Largest Col wise sum is : ";
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++){
            sum += arr[row][col];
            // cout<<sum<<" ";
        }
        if(sum > maxi){
            maxi = sum;
            colIndex = row;
        }
    } 
    cout<<maxi<<" "<<endl;   
    cout<<"At column index : "<<colIndex<<" "<<endl;   
}
 
int main() {
    int arr[3][4];

    //taking inputs 
    cout<<"enter the elements of an array : ";
    for(int i = 0; i< 3; i++){
        for(int j = 0; j< 4; j++){
            cin>>arr[i][j];
        }
    }
    // row wise print
    cout<<"elements of 2-D array are : "<<endl;
    for(int i = 0; i< 3; i++){

        for(int j = 0; j< 4; j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

    // column wise print
    // for(int i = 0; i< 4; i++){

    //     for(int j = 0; j< 3; j++){
    //         cout<<arr[j][i]<<" ";            
    //     }
    //     cout<<endl;
    // }

    // rowWiseSum(arr,3,4);
    // colWiseSum(arr,3,4);
    largestRowSum(arr,3,4);
    largestColSum(arr,3,4);
    return 0;
}