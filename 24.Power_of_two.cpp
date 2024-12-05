//Power of Two - leetcode (acc:48%) (easy)
//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2x.
//https://leetcode.com/problems/power-of-two/description/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt = 0;
        for(int i = 31; i >= 0; i--) {
            if((n&(1<<i)) != 0) cnt++;
        }
        cout << cnt <<endl;
        if(n >= 0 && cnt == 1) {
            return true;
        }
        return false;
    }
};
