//most frequent character - gfg (basic) (acc : 53%)
//https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=1&category=Arrays,Strings&difficulty=Basic&status=unsolved&sortBy=submissions
/*
Given a string s of lowercase alphabets. 
The task is to find the maximum occurring character in the string s.
If more than one character occurs the maximum number of times then print the lexicographically smaller character.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        vector <pair <int,char>> v;
        map<char,int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        
        for (auto i : m) {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end());
        int maxi = v[v.size() - 1].first;
        string str="";
        for (auto i : v) {
            if (i.first == maxi) {
                str += i.second;
            }
        }
        sort(str.begin(), str.end());
        return str[0];
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
