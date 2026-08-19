#include <bits/stdc++.h>
using namespace std;

/*
print stars in decreasing order of the no.
ex.
*****
****
***
**
*
*/


void pattern5(int n){
for(int i=0;i<n;i++){
    for(int j=n;j>=i+1;j--){
        cout<<"*";
    }
    cout<<endl;
}
}


int main(){
    pattern5(5);
}

/*
Thought process:
the outer loop in these patterns is same for increasing and decreasing
the inner loop in the decreasing order will start from n and j--
*/
