#include<iostream>
using namespace std;
 
int main() {
    int row;
    cout<<"enter value of row : ";
    cin>>row;

    int col;
    cout<<"enter value of col : ";
    cin>>col;

    //creating a 2D array
    int **arr = new int*[row];
    for(int i = 0; i < row ; i++){
        arr[i] = new int[col];
    } 

    //taking input
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    //taking output
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    //release heap wali memory
    for(int i= 0; i < row; i++){
        delete []arr[i];
    }
    //release stack wali memory
    delete []arr;

    return 0;
}