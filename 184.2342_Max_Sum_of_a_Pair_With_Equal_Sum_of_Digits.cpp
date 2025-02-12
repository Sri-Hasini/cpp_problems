//2342. Max Sum of a Pair With Equal Sum of Digits - leetcode (medium) (acc : 61%)
//https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/
/*
You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.
*/
class Solution {
public:
    // digit sum calculation
    long long digit_sum(int n) {
        long long sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            n /= 10;
        }
        return sum;
    }
    // used custom comparator, so that we can sort it in ascending way for digitsums and for values too (if they are equal), kept it static, because the sort function expects a comparator which doesnt depend on a instance of a class, non static member function requires implicit this pointer, which sort() cant provide. So, making it static removes the dependency of this
    static bool customComparision(pair<int,int> p, pair<int,int> q) {
        if (p.first == q.first) {
            return p.second < q.second;
        }
        return p.first < q.first;
    }
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        vector <pair<long,long>> sum(n);
        for (int i = 0; i < n; i++) {
            sum[i].first = digit_sum(nums[i]);//assigned digitsums
            sum[i].second = nums[i];//assigned values too
        }
        sort(sum.begin(), sum.end(), customComparision);//sorted both digitsums and values if required
        int max_sum = -1, cur_sum = -1;//taken this, because they asked us to return -1 if no possibility
        for (int i = 1; i < n; i++) {
            if (sum[i - 1].first == sum[i].first) cur_sum = sum[i - 1].second + sum[i].second;// if digitsums are equal, we add their values 
            if (max_sum < cur_sum) max_sum = cur_sum;
        }
        if (max_sum < cur_sum) max_sum = cur_sum;
        return max_sum;
    }
};
