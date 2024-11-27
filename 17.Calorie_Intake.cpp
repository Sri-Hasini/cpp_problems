//Calorie Intake-codechef()
/*
the taken calories is stored in some variable i.e., cal=y*z
if x-cal is less than 0 then we need to print -1, as check has intake more calories
otherwise print x-cal.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    int cal=y*z;
    if(x-cal<0) cout<<-1<<endl;
    else cout<<x-cal<<endl;
}
