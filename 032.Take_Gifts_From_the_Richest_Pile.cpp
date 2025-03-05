//Take Gifts From the Richest Pile - leetcode (acc: 74%) (easy)
/*
You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:
Choose the pile with the maximum number of gifts.
If there is more than one pile with the maximum number of gifts, choose any.
Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
Return the number of gifts remaining after k seconds.
*/
//https://leetcode.com/problems/take-gifts-from-the-richest-pile/submissions/1476902858/
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (int i = 0; i < k; i++) {
            int maxi = 0;
            int ind = 0;
            for (int j = 0; j < gifts.size(); j++) {
                if (maxi < gifts[j]) 
                {
                    maxi = gifts[j];
                    ind = j;
                }
            }
            gifts[ind] = floor(sqrt(maxi));
        }  
        long long sum = 0;
        for (int i = 0; i < gifts.size(); i++) {
            sum += gifts[i];
        }
        return sum;
    }
};
