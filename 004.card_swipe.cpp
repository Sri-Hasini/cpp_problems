//card swipe -codechef(1172)
/*
we took a map m and stored the value's occurance and checked whether m[i]=1,
if it is 1 then we increment it by 1, else we decrement by 1 and keep the value m[i]=0.
this means for the first entrance of any person it will increment it by 1,
and for leaving of that person we will decrement by 1 and keep it 0 for easy checking and calculate big parallely and print it
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int p;
    scanf("%d",&p);
    while(p--){
        int n,i,j,cnt=0,big=0;
        cin >> n;
        vector <int> a(n);
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        map <int,int> m;
        for(auto i:a){
            m[i]++;
            if(m[i]== 1) cnt++;
            else{
                cnt--;
                m[i]=0;
            }
            if(big<cnt) big=cnt;
        }
        cout<<big<<endl;
    }
}
