//1323. Maximum 69 Number - leetcode (easy) (acc: 82%)
//https://leetcode.com/problems/maximum-69-number/description/
/*
You are given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/
class Solution {
public:
    int maximum69Number (int num) {
        vector <int> a;
        while (num > 0) {
            int r = num % 10;
            a.push_back(r);
            num /= 10;
        }
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 6) {
                a[i] = 9;
                break;
            }
        }
        reverse(a.begin(), a.end());
        int value = 0;
        for (int i = 0; i < a.size(); i++) {
            value = value * 10 + a[i];
        }
        return value;
    }
};
