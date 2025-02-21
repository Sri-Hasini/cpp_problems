//1910. Remove All Occurrences of a Substring - leetcode (medium) (acc : 78%)
//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
/*
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.
*/
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (1) {
            auto pos = s.find(part); //finding whether it have any occurance of the part
            if (pos != string::npos) {// if it is not equal to the -1 or end i.e., npos here... 
                s.erase(pos, part.length()); //we can erase starting from the starting iterator of the given substring to length of the substring
            }
            else break;//if we dont have any occurance further we can break
        }
        return s;
    }
};
