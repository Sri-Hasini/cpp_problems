//1281. Subtract the Product and Sum of Digits of an Integer - leetcode (easy) (acc : 86%)
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/?envType=problem-list-v2&envId=math
/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/
class Solution {
public:
    int mul(int n) {
        int pro = 1;
        while (n > 0) {
            int r = n % 10;
            pro *= r;
            n /= 10;
        }
        return pro;
    }
    int sum(int n) {
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            n /= 10;
        }
        return sum;
    }
    int subtractProductAndSum(int n) {
        int pro = mul(n);
        int add = sum(n);
        return pro - add;
    }
};
