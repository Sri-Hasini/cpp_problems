//Sum of infinte array - code360 (moderate)
//https://www.naukri.com/code360/problems/sum-of-infinite-array_873335?topic=null&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav
/*
Given an array “A” of N integers and you have also defined the new array “B” as a concatenation of array “A” for an infinite number of times.
For example, if the given array “A” is [1,2,3] then, infinite array “B” is [1,2,3,1,2,3,1,2,3,.......].
Now you are given Q queries, each query consists of two integers “L“ and “R”(1-based indexing). Your task is to find the sum of the subarray from index “L” to “R” (both inclusive) in the infinite array “B” for each query.
Note :
The value of the sum can be very large, return the answer as modulus 10^9+7.
*/
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int fun(vector <long long>&sumArray, long long x, long long n) {
    long long count = (x/n) % mod;
    long long res = (count * sumArray[(int) n]) % mod;
    res = (res + sumArray[(int) (x % n)]) % mod;
    return res;
}

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
        vector <int> ans;
        vector <long long> sumArray(n + 1);
        for (int i = 1; i <= n; i++) {
            sumArray[i] = (sumArray[i - 1] + a[i - 1]) % mod;
        }
        int q;
        cin >> q;
        vector <vector <int>> queries(q, vector <int> (2));
        for (int i = 0; i < q; i++) {
            cin >> queries[i][0] >> queries[i][1];
        }
        for (int i = 0; i < q; i++) {
            long long l = queries[i][0];
            long long r = queries[i][1];
            long long rsum = fun(sumArray, r, n);
            long long lsum = fun(sumArray, l - 1, n);
            ans.push_back(((rsum - lsum) + mod)%mod);
        }
        for (auto i : ans) cout << i << " ";
    } 
}
