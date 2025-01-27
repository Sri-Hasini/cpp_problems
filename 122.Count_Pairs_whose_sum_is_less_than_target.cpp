//Count Pairs whose sum is less than target - gfg - easy (53%)
//https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1
/*
Given an array arr[] and an integer target. You have to find the number of pairs in the array whose sum is strictly less than the target.
  */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int left = 0, right = arr.size() - 1;
        int sum = 0, cnt = 0;
        while (left < right) {
            sum = arr[left] + arr[right];
            if (sum < target) {
                cnt += (right - left);
                left++;
            }
            else right--;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends
