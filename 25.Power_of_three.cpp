//Power of Three
//Given an integer n, return true if it is a power of three. Otherwise, return false.
//An integer n is a power of three, if there exists an integer x such that n == 3x.
//https://leetcode.com/problems/power-of-three/description/
class Solution {
public:
    bool isPowerOfThree(int n) {
        long long ans = 0, g = 0;
        if (n < 0) return false;
        for (int i = 0; i <= 20; i++) {
            ans = pow(3,i);
            if (ans > n) {
                g = 1;
                break;
            }
            else if (ans == n) {
                break;
            }
        }
        if (g == 1) return false;
        return true;
    }
};
