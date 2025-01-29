//Advitiya - codechef ()
//https://www.codechef.com/problems/ADVITIYA
/*
We can only do forward tranformation, so we need to use this way like applying % 26..... we need to subtract given letter - actual letter and add it to 26, then mod the result with 26
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string tar = "ADVITIYA";
    while (t--) {
        string s;
        cin >> s;
        int sum = 0; 
        for (int i = 0; i < 8; i++) {
            sum += (tar[i] - s[i] + 26) % 26;  
        }
        cout<<sum<<endl;
    }
}
