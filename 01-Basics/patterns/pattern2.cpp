#include<bits/stdc++.h>
using namespace std;

/*
print stars in increasing order
ex.
*
**
***
****
*****
*/

void pattern2(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
}

int main(){
    pattern2(5);
}