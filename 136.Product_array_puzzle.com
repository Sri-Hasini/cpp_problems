//Product array puzzle - gfg (easy) (acc : 33%)
//https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1?page=1&category=prefix-sum&sortBy=submissions
/*
Given an array, arr[] construct a product array, res[] where each element in res[i] is the product of all elements in arr[] except arr[i]. Return this resultant array, res[].
Note: Each element is res[] lies inside the 32-bit integer range.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int cnt = 0, pro = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) cnt++;
        }
        vector <int> ans;
        if (cnt > 1) {
            pro = 0;
            for (int i = 0; i < arr.size(); i++) {
                ans.push_back(0);
            }
            return ans;
        }
        else if (cnt == 1) {
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == 0) continue;
                pro *= arr[i];
            }
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == 0) ans.push_back(pro);
                else ans.push_back(0);
            }
            return ans;
        }
        else {
            for (int i = 0; i < arr.size(); i++) {
                pro *= arr[i];
            }
            for (int i = 0; i < arr.size(); i++) {
                ans.push_back(pro/arr[i]);
            }
            return ans;
        }
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
