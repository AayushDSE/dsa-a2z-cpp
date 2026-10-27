#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int size=10;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter no."<<i+1<<":";
        cin>>arr[i];
    }
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}