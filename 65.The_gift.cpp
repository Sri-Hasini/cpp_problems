//The Gift - codechef (390)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CS2023_GIFT
/*
the question is given that, whether he can present gift or not.
he have a ruppees and he can get c ruppees loan, the laptop is b ruppees cost, if he can buy that means, a + c is less than or equal to b , we can print "yes" otherwise "no"
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + c >= b) cout << "Yes\n";
    else cout << "No\n";
}
