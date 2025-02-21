//Q1. Sort Matrix by Diagonals - leetcode (medium) (acc : 72%)
//https://leetcode.com/problems/sort-matrix-by-diagonals/description/
/*
You are given an n x n square matrix of integers grid. Return the matrix such that:
The diagonals in the bottom-left triangle (including the middle diagonal) are sorted in non-increasing order.
The diagonals in the top-right triangle are sorted in non-decreasing order.
Note: Please do not copy the description during the contest to maintain the integrity of your submissions.

Input: grid = [[1,7,3],[9,8,2],[4,5,6]]
Output: [[8,2,3],[9,6,7],[4,5,1]]©leetcode
*/
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        if (grid.size() == 1) return grid;//edge case
        int n = grid.size(), cnt = 0;
        int c = 1, i = 0, j = n - 2, d = 0;
        while (i != j) {//processing for top right triangle
            int a = 0, b = j;
            vector <int> temp;
            while (i <= c && j < n) {
                temp.push_back(grid[i++][j++]);
            }
            sort(temp.begin(), temp.end());
            int k = 0;
            while (a <= c && b < n) {
                grid[a++][b++] = temp[k++];
            }
            c++;
            d++;
            i = 0; j = n - 2 - d;
            cnt++;//counting how many times this loop iterates
        }
        ++cnt;//if the top right iterates for cnt times, the bottom left iterates cnt+1 times, as we include the diagonal too here
        i = 0, c = 0, j = 0;
        d = 0;
        while (cnt--) {
            vector <int> temp;
            int a = c, b = 0;
            while (i < n && j < n - d) {
                // cout << i << " " << j << endl;
                temp.push_back(grid[i++][j++]);
            }
            int k = 0;
            sort(temp.begin(), temp.end(), greater<int>());
            // cout << a << " " << b << endl;
            while (a < n && b < n - d) {
                // cout << a << "-" << b << "=" << temp[k] << endl;
                grid[a++][b++] = temp[k++];
            }
            d++;
            c++;
            i = c, j = 0;
        }
        return grid;//as we have operations in-place we can return the same grid
    }
};
