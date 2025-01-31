//2544. Alternating Digit Sum - leetcode (easy) (acc : 68%)
//https://leetcode.com/problems/alternating-digit-sum/description/
/*
You are given a positive integer n. Each digit of n has a sign according to the following rules:
The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign.
  */
class Solution {
public:
    int alternateDigitSum(int n) {
       vector <int> v;
       while(n != 0) {
        int r = n % 10;
        v.push_back(r);
        n/=10;
       } 
       int sum = 0;
       reverse(v.begin(), v.end());
       for (int i = 0; i < v.size(); i+=2) {
        sum += v[i];
       }
       for (int i = 1; i < v.size(); i+=2) {
        sum -= v[i];
       }
       return sum;
    }
};
