//The Fibonacci series is a sequence of numbers where each number is found by adding the two numbers that come right before it. It usually starts with 0 and 1.
//eg. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,..

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
   int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
}

//Output: 0 1 1 2 3 5 8 13 21 34 55 