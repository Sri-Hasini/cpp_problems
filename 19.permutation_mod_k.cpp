//Permutation Mod K - codechef(1760)
/*
They asked to print the required permutation with the condition that --> A[i] % k != i % k
we firstly checked if the given k value is 1, if it is we directly print -1 (because anything % 1 will results 0 )
then we check for another edge case i.e., is k value equals to 2, if yes we print -1 (because in case of 2, we need the even numbers count == odd numbers count, if the n value is odd then definitely the evens count is not equals to odd count so we directly print -1
else we create a vector and store values in descending order.
we run a loop on this, for checking whether the given value and its index is equal or not, if it is equal then we run a loop from i+1 position and will find suitable value for the ith index . if such an element is found, we will replace the current element with that element.
if it is already not equal we will continue
we will handle some edge case here, if the ith value is in the last index, and if it is not satisfying the condition, then we need to swap it with the before value , if it is satisfying then we can just continue
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,val,j=1;
        cin >> n >> val;
        if(val==1){
            cout<<-1<<endl;
        }
        else if(val==2 && n%2==1){
            cout<<-1<<endl;
        }
        else {
            vector <int> a(n+1);
            for(int i=n;i>=1;i--){
                a[j]=i;
                // cout<<a[j]<<" ";
                j++;
            }
            int ind=0;
            for(int i=1;i<=n;i++) {
                if(i==n){
                    if(a[i]%val == i%val){
                        // cout<<a[i]<<" "<<a[i-1]<<endl;
                        int temp=a[i];
                        a[i]=a[i-1];
                        a[i-1]=temp;
                        // cout<<a[i]<<" "<<a[i-1]<<endl;
                    }
                    else continue;
                }
                else if(a[i]%val == i%val) {
                    for(int k=i+1;k<=n;k++) {
                        if(a[k]%val != i%val) {
                            ind=k;
                            break;
                        }
                    }
                    // ind =i+1;
                    int temp=a[i];
                    a[i]=a[ind];
                    a[ind]=temp;
                }
                else {
                    continue;
                }
            }
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        // cout<<endl;
    }
}
