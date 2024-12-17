//Most common word - leetcode(acc:44%) (easy)
//https://leetcode.com/problems/most-common-word/description/
/*
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.
The words in paragraph are case-insensitive and the answer should be returned in lowercase.
*/
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> m;
        
        string s ="";
        s += paragraph[0];
        for (int i = 1; i < paragraph.size(); i++) {
            if ((paragraph[i - 1] >='a' && paragraph[i - 1] <= 'z' || paragraph[i - 1] >= 'A' && paragraph[i - 1] <= 'Z') && (paragraph[i] == ' ' ||paragraph[i] == '!' || paragraph[i] == '?' || paragraph[i] == ','||paragraph[i]=='\'' || paragraph[i] == ';'||paragraph[i]=='.')) {
                m[s]++;
                s = "";
            }
            else {
                if (paragraph[i] >='a' && paragraph[i] <= 'z')
                s += paragraph[i];
                else if (paragraph[i] >= 'A' && paragraph[i] <= 'Z')
                s += (paragraph[i] + 32);
            }
        }
        
        map<string,int> m2;
        for (auto i : banned) {
            m2[i]++;
        }
        if (s.size() != 0 && m2.find(s) == m2.end()) {
            m[s]++;
        }
        int maxi = 0;
        string h;
        for (auto i : m) {
            string str = i.first;
            transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return tolower(c); });
          //inorder to transform whole string into lowercase we will use the above syntax
            if (maxi < i.second && m2.find(str)== m2.end()){
                h = str;
                maxi = i.second;
                cout << h <<" ";
            }
        }
        
        return h;
    }
};
