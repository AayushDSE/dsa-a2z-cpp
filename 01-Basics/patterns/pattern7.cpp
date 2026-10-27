#include <bits/stdc++.h>
using namespace std;

/*
print a pyramid pattern of stars
ex.

*/

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"0";
        }
        for(int j=0;j<2*i+1;j++){            
            cout<<"*"; 
        }
        cout<<endl;
    }
    
}


int main(){
    pattern7(12);
}

