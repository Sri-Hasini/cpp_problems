// First and second smallest - gfg (basic) 
//https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?page=1&category=Arrays,Strings&difficulty=Basic&status=unsolved&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int mini = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            if (mini > arr[i]) mini = arr[i];
        }
        int mini1 = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            if (mini1 > arr[i] && arr[i] > mini) mini1 = arr[i];
        }
        
        vector <int> a;
        if (arr.size() == 1 || mini1 == INT_MAX) {
            a.push_back(-1);
            return a;
        }
        a.push_back(mini);
        a.push_back(mini1);
        return a;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
