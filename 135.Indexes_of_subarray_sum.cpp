//Indexes of subarray sum - gfg(medium) (acc : 16%)
//https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category=prefix-sum&sortBy=submissions
/*
Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. 
You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target.
Note: If no such array is possible then, return [-1].
  */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector <int> ans;
        int window_sum = 0;
        int left = 0, right = 0;
        for (int i = 0; i < arr.size(); i++) {
            window_sum += arr[i];
            if (window_sum >= target) {
                right = i;
                while (window_sum > target && left < right) {
                    window_sum -= arr[left];
                    left++;
                }
                if (window_sum == target) {
                    ans.push_back(left + 1);
                    ans.push_back(right + 1);
                    return ans;
                }
            }
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends
