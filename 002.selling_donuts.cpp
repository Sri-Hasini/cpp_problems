//selling donuts - codechef
/*
we can write this in optimized way like , 
checking firstly if the ith element in arr is 0 or not , 
if it is 0 and the customer wants that item, he will be sad.... 
so if it is not 0 then we will decrement that value in arr by 1 and we continue the process unless customer's array is done ,
we will calculate the no.of times the customer become sad by keeping an else block if arr value at ith index is 0 we will increment it by 1
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        int arr[a],brr[b];
        for(int i=0;i<a;i++){
            cin >> arr[i];
        }
        for(int j=0;j<b;j++){
            cin >> brr[j];
        }
        int cnt=0;
        // cout<<b<<endl;
        for(int k=0;k<b;k++){
            int h=brr[k];
            if(arr[h-1] != 0){
                arr[h-1] -= 1;
                // cout<<h<<" "<<arr[h-1]<<"-";
            }
            else{
                cnt++;
            }
        }
        // cout<<endl;
        cout << cnt << endl;
    }
}
