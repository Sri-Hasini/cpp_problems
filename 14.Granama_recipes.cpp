//Granama Recipes-codechef(1337)
/*
Take frequencies of 2 strings individually using 2 maps.
Check whether the size of the two maps are equal or not , if they are not equal , then we can print "YES"
(in this case chef will obviously say no, because chef will say no if every character in one map should be equal to another map, so we can say that chef is saying right i.e., printing "YES" (NOTE: print in capitals))
otherwise(IF THEY ARE EQUAL) in else part we check whether all the characters in 1st map is not equal to other map at any point , then we keep some variable as false, and break. we print "YES" (because if characters are not same, chef says no and he is correct)
if that variable is true, that means the 2 maps have same characters , so we now check for their occurrences , if they are not equal at any point, then we break it and print "NO"(because chef will say yes, if characters are equal, but here as their occurrences are not equal, chef's answer is wrong, so we say "NO")
otherwise print "YES"
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s,h;
        cin >> s >> h;
        map<char,int>m1;
        for(auto i:s){
            m1[i]++;
        }
        map<char,int>m2;
        for(auto j:h){
            m2[j]++;
        }
        bool g1=true;
        if(m1.size()!=m2.size()) g1=false;
        else{
            auto j=m2.begin();
            map<char,int>::iterator i;
            for(i=m1.begin();i!=m1.end();i++){
                if(j!=m2.end()){
                    if(i->first!=j->first){
                        //cout << i->first <<" "<<j->first << endl;
                        g1=false;
                    }
                    j++;
                }
            }
        }
        bool g=true;
        
        if(g1){
            auto j1=m2.begin();
            for(auto i1=m1.begin();i1!=m1.end();i1++){
                if(j1!=m2.end()){
                    // cout<<i1->first<<"-"<<i1->second<<endl<<j1->first<<"-"<<j1->second<<endl;
                    if(i1->second!=j1->second){
                        g=false;
                        break;
                    }
                    j1++;
                }
            }
            if(!g){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
}
