//Chef and Memory Limit - codechef (1255)
//https://www.codechef.com/problems/CBARG
/*
The question was to calculate the total allocated memory (not allocated + deallocated) so initially we kept our cnt as the 1st element , 
because ofcourse as the memory is initially 0, the first element will be increasing than 0 (as per constraints). then we checked adjacent elements, 
if the before element is less than its next element we can add difference between them to cnt. More importantly ,
we need to take long long inorder to pass all constraints as the values may be upto 10 power 9
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long cnt = a[0];
        for (long long i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                cnt += a[i + 1] - a[i];
            }
        }
        cout << cnt << endl;
    }
}
