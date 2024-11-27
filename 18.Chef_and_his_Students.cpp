//Chef and his Students-codechef(1047)
/*
we need to first reverse the '<' as '>' and vice versa
then if , Ai is not equal to '*'(as they are given only 3 symbols i.e., '*', '<', '>' so if it is not equal to '*', automatically it is equal to one of the symbols '<' or '>'), 
we check if it is equal to '>' and A[i+1] is equal to '<', then we increment count by 1, and we skip one iteration by incrementing i by 1(as we have already checked for A[i+1] also here.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='<')
            {
                s[i]='>';
                continue;
            }
            if(s[i]=='>')s[i]='<';
        }
        // cout<<s<<endl;
        int cnt=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!='*'){
                if(s[i]=='>' && s[i+1]=='<'){
                    cnt++;
                    i++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
