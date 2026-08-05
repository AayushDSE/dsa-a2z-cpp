#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (low > high){
        return -1;
    }
    int mid = (low + high) / 2;

    if (arr[mid] == target){
        return mid;
    }    
    else if (target < arr[mid]){
        return binarySearch(arr, low, mid - 1, target);
    }
    else
        return binarySearch(arr, mid + 1, high, target);
}

int main()
{
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found.";

    return 0;
}
/*
Enter the number of elements: 6
Enter the sorted elements: 1
2
3
4
5
6
Enter the element to search: 4
Element found at index 3
*/