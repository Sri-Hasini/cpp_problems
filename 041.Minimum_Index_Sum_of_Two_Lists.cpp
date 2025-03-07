//Minimum Index Sum of Two Lists - leetcode(acc:56%) (easy)
//https://leetcode.com/problems/minimum-index-sum-of-two-lists/description/
/*
Given two arrays of strings list1 and list2, find the common strings with the least index sum.
A common string is a string that appeared in both list1 and list2.
A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.
Return all the common strings with the least index sum. Return the answer in any order.
*/
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> m1;
        map<string, int> m2;
        int ind = 0;
        for (auto i : list1) {
            m1[i] = ind;
            ind++;
        }
        int ind1 = 0;
        for (auto i : list2) {
            m2[i] = ind1;
            ind1++;
        }
        vector <pair<string,int>> x;
        for (auto i : m1) {
            if (m2.find(i.first) != m2.end()) {
                x.push_back({i.first, i.second + m2[i.first]});
            }
        }
        int mini = 1000000;
        string p = "";
        for (auto i : x) {
            if (mini > i.second) {
                mini = i.second;
                p = i.first;
            }
        }
        vector <string> ans;
        ans.push_back(p);
        for (auto i : x) {
            if (mini == i.second && p != i.first) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
