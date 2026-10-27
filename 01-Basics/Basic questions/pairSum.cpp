//find any pair whose sum is 10 

#include <bits/stdc++.h>
using namespace std;

int main (){
    int arr[]={3,8,4,7,2};
    int n=5;
    int sum=10;

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout<< "pair: "<< i <<" and "<< j<<endl;
            }
        }
    }
}