//Chef-Detective - leetcode(1253)
//https://www.codechef.com/problems/CHEFDETE
/*
The question was to find the child nodes, to whom nobody complained. so this can be achieved using a map we initialized map to store 0's from 0 to n values. 
then incremented the occurances of all values in the given elements in the map. 
so the persons to whom nobody complained wont be in the given array so it means we will have the value of them as 0 (as we initialized all keys upto n initially with 0's) so we took a vector and appended all such keys
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map <int,int> m;
    for (int i = 0; i <= n; i++) {
        m[i] = 0;
    }
    for (auto i : a) {
        m[i]++;
    }
    vector <int> ans;
    for (auto i : m) {
        if (i.second == 0) ans.push_back(i.first);
    }
    for (auto i : ans) cout << i << " ";
}
