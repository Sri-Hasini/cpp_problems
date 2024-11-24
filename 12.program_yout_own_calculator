//program your own calculator - codechef(1028)
/*
we checked if the given symbol is + or not , if it is we have displayed a+b
if it is '-' we displayed a-b
if it is '*' we displayed a*b
if it is '/' we check
 if b==0, if it is yes, then we display 0 by setting precision to 7 and keeping "fixed"(because cout will neglect decimal values, so keeping fixed it wont neglect those}
if it is not equals to 0 , then print a/b 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char c;
    cin >> a;
    cin >> b;
    cin >> c;
    // cout<<a<<"-"<<b<<endl;
    if(c=='+')cout<<a+b;
    else if(c=='-')cout<<a-b;
    else if(c=='*')cout<<a*b;
    else {
        if(b==0) cout<<fixed<<setprecision(7)<<0<<endl;
        else
        cout<<fixed<<setprecision(7)<<double(a)/b;
    }
}
