//1629. Slowest Key - leetcode (easy) (acc : 59%)
//https://leetcode.com/problems/slowest-key/description/
/*
A newly designed keypad was tested, where a tester pressed a sequence of n keys, one at a time.
You are given a string keysPressed of length n, where keysPressed[i] was the ith key pressed in the testing sequence, and a sorted list releaseTimes, where releaseTimes[i] was the time the ith key was released. Both arrays are 0-indexed. 
The 0th key was pressed at the time 0, and every subsequent key was pressed at the exact time the previous key was released.
The tester wants to know the key of the keypress that had the longest duration. The ith keypress had a duration of releaseTimes[i] - releaseTimes[i - 1], and the 0th keypress had a duration of releaseTimes[0].
Note that the same key could have been pressed multiple times during the test, and these multiple presses of the same key may not have had the same duration.
Return the key of the keypress that had the longest duration. If there are multiple such keypresses, return the lexicographically largest key of the keypresses.
*/
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {  
        int n = releaseTimes.size();
        vector <int> res(n);
        res[0] = releaseTimes[0];
        int maxi = res[0];
        vector <int> x;
        int ind = 0;
        for (int i = 1; i < n; i++) {
            res[i] = releaseTimes[i] - releaseTimes[i - 1];
            // cout << res[i] << " ";
            if (maxi < res[i]) {
                maxi = res[i];
                ind = i;
            }
            else if (maxi == res[i]) x.push_back(i);
            // cout << maxi << " " << res[i] << endl;
        }
        x.push_back(ind);
        if (maxi == res[0]) x.push_back(0);
        // cout << x.size() << endl << x[0] << endl;
        vector <int> a;
        for (int i = 0; i < x.size(); i++) {
            if (maxi == res[x[i]]) a.push_back(x[i]); 
        }
        if (a.size() == 1) return keysPressed[a[0]];
        
        vector<char> y;
        for (int i = 0; i < a.size(); i++) {
            // cout << " " << x[i] << " ";
            y.push_back(keysPressed[x[i]]);
        }
        // cout << y.size();
        sort(y.begin(), y.end());
        return y[y.size()-1];
    }
};
