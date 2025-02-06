//Small palindrome - codechef (706)
//https://www.codechef.com/problems/SMLPAL?tab=statement
/*
we can try this in brute force method also, but it will take a lot of time.... 
So, the best approach is doing with two pointers.....
We can create a vector of size that is sum of 1's and 2's count (given).
Then unless 1's count is greater than 0, we will keep 1 at the starting point and ending point simultaneously (given that the counts of 1's and 2's are even, 
which helps us to keep 2 at a time)..... Then we will increment out first pointer and decrement our last pointer and decrese the 1's count by 2 (as 2 values have already been inserted in it )
Then do the same process for 2's also and then run a loop to make the vector as a number (applying the palindrome technique "ans += 10 + number" and print it finally
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        vector <long long> v(a + b);
        long long i = 0, j = a + b - 1;
        while (a > 0) {
            v[i] = 1;
            v[j] = 1;
            i++;
            j--;
            a -= 2;
        }
        while (b > 0) {
            v[i] = 2;
            v[j] = 2;
            i++;
            j--;
            b -= 2;
        } 
        long long ans = 0;
        for (long long i = 0 ;i < v.size(); i++) {
            ans = ans * 10 + v[i];
        }
        cout << ans << endl;
    }
}
