#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            return mid;
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
    return -1;
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    cout << "Enter value : ";
    int key;
    cin >> key;
    int index = binarySearch(arr, 10, key);
    cout << index;
    return 0;
}