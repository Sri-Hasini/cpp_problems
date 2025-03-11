//Find the Index of the First Occurrence in a String - leetcode(easy)(acc:
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        int l = 0;
        int hs = haystack.size();
        int ns = needle.size();
        while(l <= hs-ns) {
            if (haystack[l] == needle[0]) {
                int x = 0;
                for (int k = 0; k < ns; k++) {
                    if (haystack[l+k] == needle[k]) {
                        x++;
                    }
                }
                if (x == ns) return l;
            }
            l++;
        }
        return -1;
    }
};
