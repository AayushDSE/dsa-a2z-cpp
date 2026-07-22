//print your name N times 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print name count times
    void printName(string name, int count, int N) {
        // Base case: if count equals N, stop recursion
        if (count == N)
            return;

        // Print the name
        cout << name << "\n";

        // Recursive call with incremented count
        printName(name, count + 1, N);
    }
};

int main() {
    Solution sol;
    sol.printName("Aayush", 0, 5);
    return 0;
}

//Time Complexity: O(N), we print our name exactly N times.
//Space Complexity: O(N), stack space used for recursive calls.