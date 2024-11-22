//playing with strings - codechef(1108)
/*
if the count of 1's in string s and count of 1's in string r matched we can print Yes, otherwise No
Because we can perform as many operations as we can to exchange 1's in order to match the r string.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,g=0;
        cin >> n;
        string s,r;
        cin >> s >> r;
        // cout<<s<<endl<<r;
        map<int,int>m1;
        map<int,int>m2;
        for(auto i:s){
            m1[i]++;
        }
        for(auto j:r){
            m2[j]++;
        }
        // cout<<m1['1']<<" "<<m2['1']<<endl;
        if(m1['1']==m2['1']){
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
}
