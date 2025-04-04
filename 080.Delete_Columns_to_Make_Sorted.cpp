//Delete Columns to Make Sorted - leetcode (acc:74%)(easy)
//https://leetcode.com/problems/delete-columns-to-make-sorted/description/
/*
You are given an array of n strings strs, all of the same length.
The strings can be arranged such that there is one on each line, making a grid.
For example, strs = ["abc", "bce", "cae"] can be arranged as follows:
abc
bce
cae
You want to delete the columns that are not sorted lexicographically. In the above example (0-indexed), columns 0 ('a', 'b', 'c') and 2 ('c', 'e', 'e') are sorted,
while column 1 ('b', 'c', 'a') is not, so you would delete column 1.
Return the number of columns that you will delete.
*/
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        for (int j = 0; j < strs[0].size(); j++) {
            for (int i = 0; i < strs.size() - 1; i++) {
                if (strs[i][j] > strs[i + 1][j]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
