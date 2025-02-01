//count digits - gfg(easy) (acc : 30%)
//https://www.geeksforgeeks.org/problems/count-digits5716/1
/*
Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        vector <int> v;
        int a = n;
        while (n != 0) {
            int r = n % 10;
            v.push_back(r);
            n /= 10;
        }
        int cnt = 0;
        for (auto i : v) {
            if (i != 0 && a % i == 0 ) cnt++;
        }
        return cnt;
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
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
