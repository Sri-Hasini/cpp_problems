//White Wall - codechef (1475)
//https://www.codechef.com/problems/WHITEWALL?tab=statement
/*
we maintained a vector of strings containing predefined sequences of "RGB".
we ran a loop for every sequence and maintained cost and current cost.....
the loop on the main string starts and it will be incremented by 3. 
check if the first character of our string and given string match or not, if it doesnt match, then increment the current cost by 1, check whether i+1 is within the range , 
then check if second character of out string and given string match or not, 
if not, then increment current cost by 1, and do the same for third character...
calculate the cost, by keeping the minimum between cost and current cost in the cost variable and finally print cost 
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        string str;
        cin >> str;
        int cost = INT_MAX;
        vector <string> s = {"RGB", "RBG", "GBR", "GRB", "BGR", "BRG"};
        for (string h : s) {
            int curcost = 0;
            for (int i = 0; i < x; i+=3) {
                if (h[0] != str[i]) curcost++;
                if (i+1 < x && h[1] != str[i+1]) curcost++;
                if (i+2 < x && h[2] != str[i+2]) curcost++;
            }
            cost = min(cost, curcost);
        }
        cout << cost << endl;
    }
}
