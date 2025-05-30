//Find the K-th Character in String Game I - leetcode(acc:72%) (easy)
/*
Alice and Bob are playing a game. Initially, Alice has a string word = "a".
You are given a positive integer k.
Now Bob will ask Alice to perform the following operation forever:
Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
For example, performing the operation on "c" generates "cd" and performing the operation on "zb" generates "zbac".
Return the value of the kth character in word, after enough operations have been done for word to have at least k characters.
Note that the character 'z' can be changed to 'a' in the operation.
*/
//https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/
class Solution {
public:
    char kthCharacter(int k) {
        string h ="a";
        int n = 1;
        while (n <= k) {
            for (int i = 0; i < n; i++) {
                if(h[i] == 'z') h.push_back('a');
                else {
                    h.push_back(h[i]+1);
                }
            }
            n = h.size();
        }
        return h[k-1];
    }
};
