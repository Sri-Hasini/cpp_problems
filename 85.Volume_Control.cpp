//Volume Control - codechef (409)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/VOLCONTROL
/*
Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1.
Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << abs(a - b) << endl;
    }
}
