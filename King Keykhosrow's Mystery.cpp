//King Keykhosrow's Mystery - codeforces
//m must be greater than or equal to at least one of a and b
//The remainder when m is divided by a must be equal to the remainder when m is divided by b
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,x;
        cin >> a >> b;
        x = min(a, b);
        while(1){
            if(x % a == x % b) {
                cout << x << endl;
                break;
            }
            x++;
        }
    }
}

i/p:
2
4 6
472 896
o/p:
12
52864
