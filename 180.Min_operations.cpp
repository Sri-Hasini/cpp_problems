// Min operations - gfg (easy) (acc : 30%)
//https://practice.geeksforgeeks.org/contest/gfg-weekly-193-rated-contest/problems
/*
You are given a string s of even length containing lowercase and uppercase enlgish characters. In one operation you can change any character in s to any other lowercase or uppercase English character.
Your task is to determined the minimum number of operations required to modify the string such that each letter in s forms a distinct pair with its opposite case letter.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minOperation(string &s) {
        map <char,int> m;
        map <char,int> m1;
        for (auto c : s) {
            if (c >= 'A' && c <= 'Z')
            m[c]++;
            else 
            m1[c]++;
        }
        int count = 0;
        for (auto i : m) {
            auto itr = m1.find(tolower(i.first));
            if (itr != m1.end()) {
                if (itr->second == i.second) {
                    m1.erase(itr);
                    continue;
                }
                else count += abs(itr->second - i.second);
                m1.erase(itr);
            }
            else {
                count += i.second;
            }
        }
        int sum = 0;
        for (auto i : m1) sum+= i.second;
        count += sum;
        return count/2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.minOperation(s);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
