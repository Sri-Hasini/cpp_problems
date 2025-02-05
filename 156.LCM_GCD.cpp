//LCM and GCD - gfg(basic) (acc : 37%)
//https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
/*
Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function inputs two integers a and b and returns a list containing their LCM and GCD.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int gcd(int a, int b) {
        if (a > 0 && b > 0 ){
            if (a > b) a = a % b;
            else b = b % a;
            return gcd(a,b);
        }
        if (a == 0) return b;
        if (b == 0) return a;
    }
    vector<int> lcmAndGcd(int a, int b) {
        vector <int> ans;
        ans.push_back((a*b) / gcd(a,b));
        ans.push_back(gcd(a,b));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
