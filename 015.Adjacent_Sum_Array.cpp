//Adjacent Sum Array-codechef(1388)
/*
we have done sorting to the array , because if larger numbers are in front place, we will get negative answers while performing operations.
we first pushed 1 into the resulted vector( in the constraints they have already mentioned that it is greater or equal to 1 
So there is no need to check whether it is greater than 1 or not particularly .
commonly we can insert x=1, then we insert another digit as Ai - x.
and updating x .
then we print our vector 
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> ans;
        for(int i=1;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int x=1;
        for(int i=1;i<=n;i++){
            // cout<<x<<endl;
            ans.push_back(x);
            x=a[i]-x;
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
