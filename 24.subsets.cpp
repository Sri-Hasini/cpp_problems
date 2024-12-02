//finding subsets - leetcode (acc : 79%) (medium)
//O(2 power n)

#include <bits/stdc++.h>
using namespace std;
void subsequence(vector<int> v,vector<int> ans, vector<vector<int>> &ds, int n) {
    if(n < 0) {
        ds.push_back(ans);
        return;
    }
    ans.push_back(v[n]);
    subsequence(v,ans,ds,n-1);
    ans.pop_back();
    subsequence(v,ans,ds,n-1);
}
int main(){
    vector <int> v = {1,2,3};
    vector <int> ans;
    int n = v.size()-1;
    vector<vector<int>> ds ;
    subsequence(v,ans,ds,n);
    for(auto i = 0; i < ds.size(); i++) {
        for (auto j = 0; j < ds[i].size(); j++) {
            cout << ds[i][j] << " ";        
        }
        cout << endl;
    }
}
