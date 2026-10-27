#include <bits/stdc++.h>
using namespace std;

/*

*/

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"0";
            
        }
        for(int j=n;j>2*i+1;j--){
            cout<<"x";
        }
        
        cout<<endl;
    }
}

int main(){
    pattern8(12);
}

