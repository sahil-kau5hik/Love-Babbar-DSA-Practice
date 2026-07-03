#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int topPeak(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    // int arr[10] = {1, 9, 9, 9, 9, 9, 13, 15, 17, 19};
    // cout << "Enter value : ";
    // int key;
    // cin >> key;
    // cout <<"First and last occurence are : "<<firstOccurence(arr,10,key)<<" , "<<lastOccurence(arr,10,key)<<endl;
    // int FO = firstOccurence(arr,10,key);
    // int LO = lastOccurence(arr,10,key);
    // cout<<"Total number of occurence of key is "<< (LO - FO) + 1 ;

    int arr[5] = {1, 3, 5, 7, 2};
    int ind = topPeak(arr, 5);
    cout << "Peak element is " << arr[ind];

    return 0;
}