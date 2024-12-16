// Coronavirus Spread - codechef (1219)
//https://www.codechef.com/problems/COVID19
/*
we need to calculate how many minimum and maximum number of people were affected by virus spread. 
we will maintain some boolean variable initially with false, means no operation has been performed just before it.
we will solve using TWO POINTER approach.
its very simple, like we take one variable at starting index and another right before it, and we will increase those by 1 unless the second meet end .
we check if the values in those 2 indices and having difference less than or equal to 2 and if the x is false, that means no operation is done before, so we can make the count as 2 
(including that value and another pointers value too) and keep x as true
if not, we check if it x is true, then we only increment one time , before the before pointers value has already been added indicating some operation performed just before (true). and keep x as true .
else , we will find minimum and maximum count obtained upto now, and keep our count again to 0 to start fresh and keeping our x as false.
after all this was done, we will again calculate the minimum and maximum because at some cases it wont goes into else block if we have testcase like we perform doing operation upto end of the array. 
if we dont find any of the operations satisfying our condition, then we check if minimum is 0 or the initial value , if yes keep it as 1, check for maximum and if yes , keep it as 1
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mini = 11, maxi = 0, cnt = 0;
        bool x = false;
        for (int i = 0, j = 1; i < n- 1 && j < n; i++, j++) {
            if (x == false && abs(a[i] - a[j]) <= 2) {
                cnt += 2;
                x = true;
            }   
            else if (x == true && abs(a[i] - a[j]) <= 2) {
                ++cnt;
                x = true;
            }
            else {
                if (mini > cnt) mini = cnt;
                if (maxi < cnt) maxi = cnt;
                cnt = 0; 
                x = false;
            }
            
        }
        if (mini > cnt) mini = cnt;
        if (maxi < cnt) maxi = cnt;
        if (mini == 11 || mini == 0) mini = 1;
        if (maxi == 0) maxi = 1;
        cout << mini << " " << maxi << endl;
    }
}
