//Is it hot or cold - codeched(410)
//Chef considers the climate HOT if the temperature is above 20,
//otherwise he considers it COLD. You are given the temperature C, find whether the climate is HOT or COLD.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n > 20) cout << "HOT\n";
        else cout << "COLD\n";
    }
}
