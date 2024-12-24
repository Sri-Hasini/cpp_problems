// Search in a sorted Matrix- geeksforgeeks (medium)(56%)
// https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1
/*
Given a strictly sorted 2D matrix mat[][] of size n x m and a number x. Find whether the number x is present in the matrix or not.
Note: In a strictly sorted matrix, each row is sorted in strictly increasing order, 
and the first element of the ith row (i!=0) is greater than the last element of the (i-1)th row.
*/

 
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        for (int i = 0; i < n; i++) {
            if (mat[i][m - 1] == x) return true;
            if (mat[i][m - 1] > x) {
                int low = 0, high = m - 1;
                while(low <= high) {
                    int mid = (low + high) / 2;
                    if (mat[i][mid] == x) {
                        return true;
                    }
                    else if (mat[i][mid] > x) {
                        high = mid - 1;
                    }
                    else {
                        low = mid + 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
