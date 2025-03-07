//Number of Lines To Write String - leetcode (acc:69%)(easy)
//https://leetcode.com/problems/number-of-lines-to-write-string/description/
/*
You are given a string s of lowercase English letters and an array widths denoting how many pixels wide each lowercase English letter is.
Specifically, widths[0] is the width of 'a', widths[1] is the width of 'b', and so on.
You are trying to write s across several lines, where each line is no longer than 100 pixels. 
Starting at the beginning of s, write as many letters on the first line such that the total width does not exceed 100 pixels.
Then, from where you stopped in s, continue writing as many letters as you can on the second line. Continue this process until you have written all of s.
Return an array result of length 2 where:
-result[0] is the total number of lines.
-result[1] is the width of the last line in pixels.
*/
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> ans;
        int x = 0;
        int w = 0;
        for (int i = 0; i < s.size(); i++) {
            x += widths[s[i] - 'a'];
            // cout <<endl << "--"<< x << endl;
            if (x % 100 >= 1 && x % 100 <= 9) {
                
                if (((x - widths[s[i] - 'a']) % 100) < 100 && ((x - widths[s[i] - 'a']) % 100) > 90) {
                    // cout << "-" << (x - widths[s[i] - 'a']) % 100 ;
                    w = 100 - ((x - widths[s[i] - 'a']) % 100);
                    x += w;
                }
            } 
        }
        int y = ceil(x/100.0);
        // cout <<endl << x << endl;
        int z = x % 100;
        ans.push_back(y);
        if (z != 0) {
        ans.push_back(z);
        }
        else
        ans.push_back(100);
        return ans; 
    }
};
