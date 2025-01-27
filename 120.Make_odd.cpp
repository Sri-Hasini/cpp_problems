//Make odd - codechef (1203)
//https://www.codechef.com/problems/P2P?tab=statement
/*
We want the answer to be odd by any way, mainly there are 2 ways.
To pick '1' or '0' in the 'a' string --------- 2) To pick '1' or '0' in the 'b' string.
We need to pick in such a way that it should get the sum as odd, if not we will print no....
1st thing is that if there are both 1's in a[i] and b[i] then we will definitely need to pick '1' and add to our total_sum.... if any of them is 1, then there is a chance of adding to sum or we can leave too... 
we dont know that before only... 
So we will count such type of 1's in either a[i] or b[i] and maintain some count variable....
we check if our calculated sum is odd or not, if yes, print directly "YES", if not, we will check another possibility that if the count is greater than 1,
then we can add one '1' to the answer to make it odd, so we can print "YES", or else print "NO"
  */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string a;
        string b;
        cin >> a >> b;
        int count = 0, total_sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i] && b[i] == '1') total_sum += 1;
            else if (a[i] == '1' || b[i] == '1') count++;
        }
        if (total_sum % 2) cout << "YES\n";
        else {
            if (count >= 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
