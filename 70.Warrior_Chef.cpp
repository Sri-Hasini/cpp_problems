//Warrior Chef - codechef (1433)
//https://www.codechef.com/problems/WARRIORCHEF
/*
When we observe the pattern in the testcases carefully, we got to know that, we need to return the element where our condition fails. Let me tell you clearly, 
the question was given to find the minimum resistance value which will remain chef's resistance as positive value ( > 0 ).
for this, what we can do is, sorting in descending order and we can perform brute force for this unless our condition fails (having positive resistance)
and finally print the value which is causing our resistance value <= 0.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, h;
        cin >> n >> h;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int x = 0;
        for (int i = 0; i < n; i++) {
            h -= a[i];
            if (h <= 0) {
                x = a[i];
                break;
            }
        }
        cout << x << endl;
    }
}
