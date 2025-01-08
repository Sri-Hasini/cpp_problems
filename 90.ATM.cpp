//ATM - codechef (410)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST?tab=statement
/*
Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 US Dollar.
Calculate Pooja's account balance after an attempted transaction.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    double Y;
    cin >> X >> Y;

    if (X % 5 == 0 && X + 0.50 <= Y) {
        Y -= (X + 0.50);
    }

    cout << fixed << setprecision(2) << Y << endl;
    return 0;
}
