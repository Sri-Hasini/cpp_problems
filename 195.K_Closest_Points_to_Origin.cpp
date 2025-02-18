//K Closest Points to Origin - gfg (medium) (acc : 62%)
//https://www.geeksforgeeks.org/problems/k-closest-points-to-origin--172242/1
/*
Given an array of points where each point is represented as points[i] = [xi, yi] on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
The distance between two points on the X-Y plane is the Euclidean distance, defined as: 
sqrt( (x2 - x1)2 + (y2 - y1)2 )
Note: You can return the k closest points in any order, driver code will sort them before printing.
*/
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector <vector <int>> ans;
        vector <pair<double, int>> a;
        for (int i = 0; i < points.size(); i++) {
            long long y = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
            a.push_back({sqrt(y), i});
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++) {
            ans.push_back(points[a[i].second]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
