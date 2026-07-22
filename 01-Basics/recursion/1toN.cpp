//Print 1 to N using Recursion

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printNumbers(int count, int N){
        if(count==N){
            return;
        }

        cout<<count+1<<endl;

        printNumbers(count+1,N);
    }
};

int main(){
    Solution c1;
    c1.printNumbers(0,10);
    return 0;
}

/*

//Backtracking to print in reverse order

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current to n using backtracking
    void printNumbers(int current, int n) {

        if (current > n)
            return;

        // Recursive call with next number
        printNumbers(current + 1, n);

        // Print current number during backtracking
        cout << current << " ";
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(1, n);
    cout << "\n";

    return 0;
}

*/


// Time Complexity: O(N), we print every number from N to 1 using recursion
// Space Complexity: O(N), stack space used for recursive calls.