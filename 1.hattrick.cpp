//hattrick
/*
hattrick means we need to get continuous W . 
So , we just checked all possibilities of it by checking whether a is 'W' then whether b is 'W' if c is also 'W' we store some variable g as 1,
in this way we check for all possibilities and finally output "YES" if g==1, otherwise "NO"
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char a,b,c,d,e,f,g=0;
        cin>>a>>b>>c>>d>>e>>f;
        if(a=='W'){
            if(b=='W'){
                if(c=='W'){
                    g=1;
                }
            }
        }
        if(b=='W'){
            if(c=='W'){
                if(d=='W'){
                    g=1;
                }
            }
        }
        if(c=='W'){
            if(d=='W'){
                if(e=='W'){
                    g=1;
                }
            }
        }
        if(d=='W'){
            if(e=='W'){
                if(f=='W'){
                    g=1;
                }
            }
        }
        
        if(g==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
