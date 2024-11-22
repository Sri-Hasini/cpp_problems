//Distinct pair sum - codechef(1480)
/*
we observed the pattern that the result is always the sum of the difference between and b multiplied by 2 and 1
so we just add those 
eg: 2 5 --> 10
2+2    3+3    4+4   5+5
2+3    3+4    4+5
2+4    3+5
2+5

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a>>b;
        cout<<(2*abs(a-b))+1<<endl;
    }
}
