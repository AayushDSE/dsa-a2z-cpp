//The Fibonacci series is a sequence of numbers where each number is found by adding the two numbers that come right before it. It usually starts with 0 and 1.
//eg. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,..

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    int a=0,b=1;
    int c;
    if (n >= 1){
        cout << a << " ";
    }
    if (n >= 2){
        cout << b << " ";
    }

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}

int main(){
   cout<<fibonacci(11);
}
//Output: 0 1 1 2 3 5 8 13 21 34 55 0

