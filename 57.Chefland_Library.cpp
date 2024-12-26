//Chefland Library - codechef (1058)
//https://www.codechef.com/problems/BORROWBOOK
/*
The question is to calculate the penalty They will give us the day at which they returned some books can be returned on the same day if returned on the same day we need to calculate the maximum penalty 
(calculating penalty here means it's position i.e its index(as we are taking 0 based index we need to add +1 to it while calculating sum)) 
in order to take the highest index we can update it in normal way and also using map. 
using map is very easy. instead of normal incrementing occurances of values in the map ,
we can store the index of it by doing +1 in order to know position. so every time same value occur, it will update its value. hence we can add all the values of the keys for our sum
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map <int,int> m;
        for (int i = 0; i < n; i++) {
            m[a[i]] = i+1;
        }
        int sum = 0;
        for (auto i : m) {
            sum += i.second;
        }
        cout << sum << endl;
    }
}
