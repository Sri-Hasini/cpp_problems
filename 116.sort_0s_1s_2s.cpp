//sort 0s, 1s and 2s - codechef(medium) (acc : 50%)
//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
/*
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
You need to solve this problem without utilizing the built-in sort function.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) c0++;
            if (arr[i] == 1) c1++;
            if (arr[i] == 2) c2++;
        }
        for (int i = 0; i < c0; i++) {
            arr[i] = 0;
        }
        for (int j = c0; j < c1 + c0; j++) {
            arr[j] = 1;
        }
        for (int k = c1 + c0; k < c2 + c1 + c0; k++) {
            arr[k] = 2;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
