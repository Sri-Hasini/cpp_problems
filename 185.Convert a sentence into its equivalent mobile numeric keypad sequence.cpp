//Convert a sentence into its equivalent mobile numeric keypad sequence - gfg (easy) (45%)
//https://www.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
/*
Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence. 
Please note there might be spaces in between the words in a sentence and we can print spaces by pressing 0.
*/
//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    map <char, string> m;
    m['A'] = "2";
    m['B'] = "22";
    m['C'] = "222";
    m['D'] = "3";
    m['E'] = "33";
    m['F'] = "333";
    m['G'] = "4";
    m['H'] = "44";
    m['I'] = "444";
    m['J'] = "5";
    m['K'] = "55";
    m['L'] = "555";
    m['M'] = "6";
    m['N'] = "66";
    m['O'] = "666";
    m['P'] = "7";
    m['Q'] = "77";
    m['R'] = "777";
    m['S'] = "7777";
    m['T'] = "8";
    m['U'] = "88";
    m['V'] = "888";
    m['W'] = "9";
    m['X'] = "99";
    m['Y'] = "999";
    m['Z'] = "9999";
    m[' '] = "0";
    string ans = "";
    for (int i = 0; i < S.size(); i++) {
        ans += m[S[i]];
    }
    return ans;
}
