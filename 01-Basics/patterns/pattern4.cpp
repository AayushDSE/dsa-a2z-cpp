#include <bits/stdc++.h>
using namespace std;

/*
print no. as many times as the no.
ex.
1
22
333
4444
55555
*/

int pattern4(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1;
    }
    cout<<endl;
}
}

int main(){
    pattern4(5);
}