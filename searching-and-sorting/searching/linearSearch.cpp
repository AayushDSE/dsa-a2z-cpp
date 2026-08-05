#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int n){
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            cout<<"Element found at index:"<<i;
            return i;
        }
    }
    
    cout<<"Element not found"<<endl;
    return 0;
    
}

int main(){
    int size;
    int n;
    cout<<"Enter size of the array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i<<" in the array: ";
        cin>>arr[i];
    }
    linearSearch(arr,size,6);
}

/*Output: Enter size of the array:6
Enter element 0 in the array: 4
Enter element 1 in the array: 5
Enter element 2 in the array: 6
Enter element 3 in the array: 3
Enter element 4 in the array: 2
Enter element 5 in the array: 1
Element found at index:2
*/