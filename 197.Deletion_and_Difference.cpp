//Deletion and Difference - codechef (1343) 
//https://www.codechef.com/problems/DELDIF?tab=statement
/*
Given an array and asked us to find out the minimum possible length of that array after performing some operations.

we took a map and stored the frequencies of the number in it

we took odd count initially as 0(representing the number of unique numbers left finally) , zero as false (representing that atleast one 0 is present or not) and flag as false 
(representing atleast if one pair gets cancelled, so that we will get a 0)

we checked if there is atleast one 0 or not and updated zero accordingly.

we ran a loop on the map. we ignored if we encounter 0 as key, because we already processed (we dont want the count of 0's, as all zero's can get cancelled and become one 0).   
If the frequency of some key is odd, then we know that it will remain 1 copy of it in the array as it cant get cancelled, so we increment odd by 1.    
if it is frequency is odd and it is greater than 1, that means it definitely have pairs in it 
(eg : take 3 as frequency of some key 5, we have 5 5 5 ---> 2 5's get cancelled and give 0 and another 5 remains, 
we increment odd representing this 5 and we keep flag as true representing that atleast one pair has occured).

if the frequency is even, then  now too we can keep flag as true representing that atleast one pair has occured.

so finally keep answer as odd, and add 1 to it if either zero is true or flag is true...... finally print answer
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        map <int,int> m;
        for (int i = 0; i < n; i++) m[a[i]]++;
        int odd = 0;//for counting unique elements
        bool zero = false;//representing whether atleast one 0 is present or not
        bool flag = false;//representing the pairs which gets cancelled
        if (m[0] > 0) zero = true;//can keep true, if atleast 1 0 is there
        for (auto i : m) {
            if (i.first == 0) continue;//can skip if the key is 0 as we already processed it above
            else if (i.second % 2 == 1) {//if it occurs odd no.of times
                odd++;//increment odd count by 1
                if (i.second > 1) //representing atleast a pair will definitely gets cancelled
                    flag = true;
            }
            else flag = true;//representing that it has occured even no.of times, so definitely atleast a pair will occur
        }
        int ans = odd;
        if (zero || flag) ans += 1;
        cout << ans << endl;
    }
}
