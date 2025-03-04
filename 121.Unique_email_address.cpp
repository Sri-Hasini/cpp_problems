//Unique email address - leetcode (easy) (acc : 67%) 
//https://leetcode.com/problems/unique-email-addresses/
/*
Every valid email consists of a local name and a domain name, separated by the '@' sign. Besides lowercase letters, the email may contain one or more '.' or '+'.
For example, in "alice@leetcode.com", "alice" is the local name, and "leetcode.com" is the domain name.
If you add periods '.' between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule does not apply to domain names.
For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.
If you add a plus '+' in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered. Note that this rule does not apply to domain names.
For example, "m.y+name@email.com" will be forwarded to "my@email.com".
It is possible to use both of these rules at the same time.
Given an array of strings emails where we send one email to each emails[i], return the number of different addresses that actually receive mails.
*/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map <string, int> m;
        for (int i = 0; i < emails.size(); i++) {
            string a;
            string b;
            string c;
            bool x = false;
            int y = 0;
            for (int j = 0; j < emails[i].size(); j++) {
                if (emails[i][j] != '@' && x == false) {
                    if (emails[i][j] == '+') {
                        while (emails[i][j] != '@') {
                            j++;
                        }
                        if (emails[i][j] == '@') {
                            x = true;
                            y = j;
                            break;
                        }
                    }
                    if (emails[i][j] != '.')
                        a += emails[i][j];
                }  
                else if (emails[i][j] == '@') {
                    x = true;
                    y = j;
                    break;
                }
            }
            for (int k = y; k < emails[i].size(); k++) {
                a += emails[i][k];
            }
            m[a]++;
        }
        return m.size();
    }
};
