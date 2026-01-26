//two cards - codechef(1553)
/*
We have calculated the max value in a[ ] and max value in b[ ] ,
and also stored index of those in some variables. 
Then we calculated the max of the parallel values and store in another 2 varaibles.
Alice can take the 1st max value in a[ ] , if the corresponding b[ ] is also the max, 
or else Alice can take the max value in b[ ] . If alice takes 1st max , definitely bob will take 2nd max in a[ ] 
so we also calculated 2nd max value in a[ ] and stored in some variable we calculated max(max value in a[ ] , 
max value in b[ ]) and stored in some variable we check if that variable != the variable stored regarding 2nd max in a[ ] (for bob) if true , 
print yes otherwise check whether , the 2nd max in a[ ] is not equal to 1st max in a[ ] and max in b[ ] (2nd max , 1st max means the values after calculating corresponding a[ ] and b[ ] )
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,max1=0,ind1=0,max2=0,ind2=0,maxa=0,maxb=0,max3=0,ind3=0,maxc=0;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(max1<a[i]){
                max1=a[i];
                ind1=i;
            }
        }
        for(int j=0;j<n;j++){
            cin >> b[j];
            if(max2<b[j]){
                max2=b[j];
                ind2=j;
            }
        }
        for(int k=0;k<n;k++){
            if(k==ind1) continue;
            if(max3<a[k]){
                max3=a[k];
                ind3=k;
            }
        }
        
        maxa=max(max1,b[ind1]);
        maxb=max(max2,a[ind2]);
        maxc=max(max3,b[ind3]);
        int maxd=max(maxa,maxb);
        // cout<<maxa<<" "<<maxb<<" "<<maxc<<endl;
        if(maxd!=maxc) cout<<"Yes\n";
        else if(maxa!=maxc || maxc!=maxb) {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
        
    }
}
