// return true if duplicate no. found in array

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={5,8,2,9,8};
    int n=5;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"true"<<endl;
                cout<< "Duplicate found at Index: "<< j <<" of: "<< i <<" index";
            }
            
        }
    }
}
