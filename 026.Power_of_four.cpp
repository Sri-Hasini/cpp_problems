//Power of Four - leetcode(acc:48%) (easy)
//Given an integer n, return true if it is a power of four. Otherwise, return false.
//An integer n is a power of four, if there exists an integer x such that n == 4x.
//https://leetcode.com/problems/power-of-four/description/
class Solution {
public:
    bool isPowerOfFour(int n) {
        long long ans = 0, g = 0;
        for (int i = 0; i < 20; i++) {
            ans = pow(4,i);
            if (ans > n) {
                g = 1;
                break;
            }
            else if (ans == n) {
                break;
            }
        }
        if (g == 1) return false;
        else return true;
    }
};
