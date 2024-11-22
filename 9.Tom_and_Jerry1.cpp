//Tom and Jerry1 -codechef()
/*
Here, tom can move from his position (a,b) to toms position (c,d).
so we can find the distance like the difference of b and d added to the difference of c and a.
if that distance is less than k, we print "No" directly because it requires more steps 
otherwise , check if the extra space is even or odd, if it is even then print Yes, otherwise No
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        int distance=abs(b-d)+abs(a-c);
        if(k<distance) cout<< "NO\n";
        else{
            if((k-distance)%2==0)cout<<"Yes\n";
            else cout<<"NO\n";
        }
    }
}
