//Assignment Score-codechef()
/*
Chef will only pass when he can score 50% of the total marks.
each test is for 100 , so we have (n+1)*100 marks.
The input is given for only n exams , and we need to check whether he can pass or not, if he can, then we need to print the marks needed to pass.
we calculated total marks and stored in variable "x".
we stored 50% of that total in another variable "a1".
we iterated over whole array and calculated sum.
if that generated sum is greater than or equal to a1 , then we print 0( they asked for least marks that he can get to pass, if he had already scored enough marks in exams, we can directly print 0)
otherwise, check if a1-sum is less than or equals to 100, if yes, print a1-sum.
otherwise print -1( if the result of a1-sum is greater than 100 , there is no way for chef to pass)
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int x=(n+1)*100;
        int a1= 0.5 * x;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum >=a1)cout<<0<<endl;
        else if(a1-sum <=100) cout<<(a1-sum)<<endl;
        else cout<<-1<<endl;
    }
}
