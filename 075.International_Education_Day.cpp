//International Education Day! - codechef (271)
//https://www.codechef.com/problems/IED
/*
they asked us to print the maximum value of the given numbers. so its better to use max directly and check
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a * c, b * c);
}
