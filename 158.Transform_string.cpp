//Transform string - codechef (1665)
//https://www.codechef.com/problems/P4_172
/*
we need to check from back side, because if we do it from the front side, like checking for the last occurence of the given sub string in the main string, then we wont get minimum value....
lets see an example:
------------------------------
'aaaaaaba'  is the main string  and 'aa' is the sub string......
If we do check for the last occurence of the sub string then, we will get the index as 4, we will delete before all i.e., 4 and keep it in our ans variable, 
then we will remove b (its position is 3, so ans += 3), then the remaining a (its position is 3, so ans += 3......)
then our answer will be 10, but the required answer is 7.....
Because, when we come from the back side, check whether the last character of our sub string matched with the last character of the main string,
if yes, then decrement the index value by 1 and decrement the size of the sub string by 1, representing how many characters we still need to find......
if those doesnt match, then it seems that we need to delete that character from main string, so add (m+1) to the count variable....
If our index is greater than or equal to 0, it means some characters still left in the sub string and not present in the main string, so we will print -1, otherwise print the count 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string m_str, s_str;
        cin >> m_str >> s_str;
        long long n = m_str.size();
        long long m = s_str.size();
        long long ind = m - 1, count = 0;
        for (long long i = n - 1; i >= 0; i--) {
            if (s_str[ind] == m_str[i]) {
                m--;
                ind--;
            }
            else count += (m + 1);
        }
        if (ind >= 0) cout << -1 << endl;
        else cout << count << endl;
    }
    
}
