//chefs and dolls -codechef(1012)
/*
we need to just check whether there are even number of pairs or not so we took map for finding the number of occurances of particular number and if it is odd , we will print that number
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,g=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i:m){
            if(i.second%2 != 0) g=i.first;
        }
        cout<<g<<endl;
    }
}
