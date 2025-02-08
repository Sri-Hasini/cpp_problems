//Meta Strings - code360 (easy)
//https://www.naukri.com/code360/problems/meta-strings_1089556?topList=top-google-coding-interview-questions&problemListRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=1&search=&company%5B%5D=Google&company%5B%5D=Apple&company%5B%5D=Amazon&company%5B%5D=Microsoft&difficulty%5B%5D=Easy&sort_entity=avg_time&sort_order=ASC&customSource=studio_nav
/*
You are given two strings 'STR1' and 'STR2'. You need to tell whether the strings are meta strings or not.
Meta strings are strings that can be made equal by swapping exactly one pair of distinct characters in one of the strings.
Note:
Equal strings are not considered as meta strings. 
*/
#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    int cnt = 0;
    if (str1.size()!=str2.size()) return false;
        vector <int> v;
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] != str2[i]) {
                v.push_back(i);
                cnt++;
            }
        }
        if (cnt == 2) {
            if (v.size() == 0)
            return true;
            if (str1[v[0]] == str2[v[1]] && str1[v[1]] == str2[v[0]]) return true;
        }
        return false;
}
