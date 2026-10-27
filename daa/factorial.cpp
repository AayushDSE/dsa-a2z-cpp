#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<n+1; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
   cout<<factorial(10);
}

//Output: 3628800  