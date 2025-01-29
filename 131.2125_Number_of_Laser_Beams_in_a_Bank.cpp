//2125. Number of Laser Beams in a Bank - leetcode (medium) (acc : 85%)
//https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/
/*
Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. 
'0' means the cell is empty, while'1' means the cell has a security device.
There is one laser beam between any two security devices if both conditions are met:
The two devices are located on two different rows: r1 and r2, where r1 < r2.
For each row i where r1 < i < r2, there are no security devices in the ith row.
Laser beams are independent, i.e., one beam does not interfere nor join with another.
Return the total number of laser beams in the bank.
*/
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < bank.size(); i++) {
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') cnt1++;
            }
            sum += cnt1 * cnt2;
            if (cnt1 != 0) cnt2 = cnt1;
            cnt1 = 0;
        }
        return sum;
    }
};
