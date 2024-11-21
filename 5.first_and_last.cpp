//first and last - codechef(932)
/*
We can do a lot of process by rotating whole array and then calculate, but it leads to time complexity.
So, we can just calculate the sum of current and adjacent values and also 1st and last value, and calculate for a maximum value and then print it

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,big;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        big=a[0]+a[n-1];
        for(int i=0;i<n-1;i++){
            int h=a[i]+a[i+1];
            if(big<h)big=h;
        }
        cout<<big<<endl;
    }
}
