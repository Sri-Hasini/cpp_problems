//Making a Meal -codechef(1214)
/*
We need to check how many times the word "codechef" can be made.
So, firstly they will give some number of strings, we need to combine them into one and traverse them for finding number of occurrences via a map.
We will initially declare the values of keys as 0, so that it is meaningful when we check .
Then we will increment if the characters are equal to the letters in the word "codechef".
We will check for the minimum number of occurence that some letter have.
if that minimum is 0, then we print 0
Otherwise, we will check whether the occurrences of 'c' and 'e' are more than twice of that of minimum.(because we have 2 c's and 2 e's and remaining as 1 occurrence in the word "codechef")
so if it true, we will print the minimum value
otherwise, in else block we will check the minimum of 'c' or 'e', and we print half of that value.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string h="";
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            h+=s;
        }
        map<char,int>m;
        m['c']=0;
        m['o']=0;
        m['d']=0;
        m['e']=0;
        m['h']=0;
        m['f']=0;
        for(auto i:h){
            if(i=='c'||i=='o'||i=='d'||i=='e'||i=='c'||i=='h'||i=='e'||i=='f'){
                m[i]++;
            }
        }
        int mini=INT_MAX;
       
        
        for(auto i:m){
            if(mini>i.second){
                mini=i.second;
            }
        }
        // cout << mini << endl;
        if(mini == 0)cout << 0 << endl;
        else if((m['c']>=(2*mini)) && ((m['e'])>=2*mini)) cout<< mini<<endl;
        else 
        {
            int mi=min(m['c'],m['e']);
            cout<<mi/2<<endl;
        }
    }
}
