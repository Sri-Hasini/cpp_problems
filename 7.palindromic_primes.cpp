//palindromic primes -codechef(1253)
/*
We observed the number of primes which are having even number of digits and odd number of digits upto 10 power 5.
We found that there are only 1 even number of digits palindromic prime i.e., 11 which is the 5th one, and remaining all are odd number of digits
So, we checked if the number is less than or equal to 4 to print evens as 0 and odds as that number, otherwise we print even as 1 and odds as number-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=4) cout<< 0<<" "<< n<<endl;
        else cout<< 1 <<" "<<n-1<<endl;
    }
}
