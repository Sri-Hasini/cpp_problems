//Cool Subsequences - codechef (1239)
//https://www.codechef.com/problems/COOLSUB?tab=statement
/*
You are given an array A containing N positive integers.
A subsequence of this array is called cool if the averages of all non-empty subsequences of this subsequence are present in the complement subsequence. The complement subsequence refers to the subsequence formed by the elements we didn't consider.
For example, consider the array A=[8,4,2,1,3,2,5,8,2].
Consider the subsequence [2,2,8] of this array.The complement subsequence is [8,4,1,3,5,2].
The non-empty subsequences of [2,2,8] are [2],[8],[2,2],[2,8],[2,2,8], with averages 2,8,2,5,4 respectively.
All of these values are present in the complement subsequence, therefore [2,2,8] is a cool subsequence. 
Note that no rounding is done when computing the average. For example the average of {1,2,5} is 1+2+5=8, we do not round it to 2 or 3.Find any cool subsequence of the array with length at least 1, or report that no such subsequence exists.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map <int,int> m;
        bool x = false;
        for (auto i : a) m[i]++;
        for (auto i : m) {
            if (i.second >= 2) {
                cout << 1 << endl << i.first << endl;
                x = true;
                break;
            }
        }
        if (!(x)) {
            cout << -1 << endl;
        }
    }
}
