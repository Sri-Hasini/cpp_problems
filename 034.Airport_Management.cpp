// Airport Management - codechef (1201)
//https://www.codechef.com/problems/AIRM
/*
observe the test cases provided, we observe that we require as many as the count of highest number of mode. 
mode means the number which occuring mroe times . we find the mode by combining both arrays and then finding. print that value which have more value
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], d[n];
        vector <int> v;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> d[i];
            v.push_back(a[i]);
            v.push_back(d[i]);
        }
        map<int,int> m;
        for (auto i : v) {
            m[i]++;
        }
        int maxi = 0;
        for (auto i : m) {
            if (maxi < i.second) maxi = i.second;
        }
        cout << maxi << endl;
    }

}
