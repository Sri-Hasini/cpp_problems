//Minimum bottle - codechef(656)
//https://www.codechef.com/problems/MINBOTTLES
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << ceil(sum * 1.0/k) << endl;
        
    }
}
