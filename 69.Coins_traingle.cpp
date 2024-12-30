//Coins And Triangle - codechef (1059)
//https://www.codechef.com/problems/TRICOIN?tab=statement
/*
if we observe the question and the test cases carefully, we can observe that they had given the value based on the formula n * (n + 1) / 2 that means sum of n natural numbers formula.
they have given that total sum, we need to find that n value.
in the constraints they gave that a[i] may range upto 1e9.
so :  
(44,721×44,722) / 2 = 1,000,036,282 ( > 1e9), 

44721 x 44722 = 2 x 1,000,036,282 ( > 1e9), sp we can make it round figure, as 45000 and perform upto that limit.

so i took a loop uoto 45000, which satisfies the condition of n * (n + 1 ) / 2 should be less than or equal to given n value.
The point where it gets larger is the point where we need to break the loop, and print the before position of it.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int i;
        for (i = 1; i < 45000; i++) {
            if (i * (i + 1) > 2 * n) break;
        }
        cout << --i << endl;
    }
}
