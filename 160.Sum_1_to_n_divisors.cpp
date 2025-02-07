//Sum 1 to n divisors - gfg (easy) (43%)
//http://geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
/*
Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long fun(int n) {
        long long sum = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                sum += i;
                if (i != (n/i))
                sum += (n/i);
            }
        }
        return sum;
    }
    int sumOfDivisors(int n) {
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += fun(i);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
