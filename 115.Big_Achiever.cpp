//Big Achiever - codechef (699)
//https://www.codechef.com/problems/BIG
/*
they asked us to print 1 when the current element is greater than before all elements... if no, print 0.
so we kept some variable maxi to know which element is maximum upto the current - 1 elements... 
we have created a vector to store answers and initially pushed 1, because for the element at 0th index, there are no before ones to check with....
we calculated if our maxi is less than current element, we can store 1 in out created vector at current possition otherwise 0, 
and also update maxi by keeping maximum value of the previous maximum and current element
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
        int maxi = a[0];
        vector <int> ans;
        ans.push_back(1);
        for (int i = 1; i < n; i++) {
            if (maxi < a[i]) ans.push_back(1);
            else ans.push_back(0);
            maxi = max(a[i], maxi);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
