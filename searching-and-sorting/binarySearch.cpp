#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int st=0, end=size-1;
    while(st<=end){
        int mid=(st+end)/2;

        if(target<arr[mid]){ 
            end=mid-1;
        }
        else if(target>arr[mid]){
            st=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,4,5,6,7,3,45,8,9};
    int size=9;
    cout<<binarySearch(arr,size,45);

    return 0;
}

//Output: 6