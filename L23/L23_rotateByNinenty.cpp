#include<iostream>
#include<algorithm>
using namespace std;

void rotateBy90(int arr[4][4], int n){

        int first = 0 ;
        int last = n-1;

        for(int j = 0; j <= n-2;j++){
            int i = j;
            int l = last;

            cout<<"matrix print"<<endl;
            cout<<endl;
            while(i<l){
                int offset = i - first;
            
                swap(arr[first][i],arr[last-offset][first]);
                swap(arr[last-offset][first],arr[last][last-offset]);
                swap(arr[last][last-offset],arr[i][last]);
                i++;

                // row wise print
                cout<<"elements of 2-D array are : "<<endl;
                for(int i = 0; i< 4; i++){

                    for(int j = 0; j< 4; j++){
                        cout<<arr[i][j]<<" ";
            
                    }
                    cout<<endl;
                }
            }
            first++;last--;
        }

        
}    
 
int main() {
    int arr[4][4];

    //taking inputs 
    cout<<"enter the elements of an array : ";
    for(int i = 0; i< 4; i++){
        for(int j = 0; j< 4; j++){
            cin>>arr[i][j];
        }
    }

    // row wise print
    cout<<"elements of 2-D array are : "<<endl;
    for(int i = 0; i< 4; i++){

        for(int j = 0; j< 4; j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

    rotateBy90(arr, 4);
    return 0;
}