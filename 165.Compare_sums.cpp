//compare sums - code360 (easy)
//https://www.naukri.com/code360/problems/compare-sums_11431921?topic=null&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
/*
You are given an array 'A' of 'N' integers which contains integers in ascending order followed by integers in descending order.
For example in the array [1, 3, 5, 2, 1], the ascending part is [1, 3, 5], and the descending part is [5, 2, 1].
You want to find out which part has the larger sum of the values.
Return '0' if the sum of the values in the ascending part is greater than the descending part,
'1' if the sum of the values in the descending part is greater than the ascending part, and '-1' if both the sums are equal.

Example:
N = 6
A = [1, 2, 5, 3, 2]
The ascending and descending parts of the array are ['1', '2', '5'] and ['5', '3', '2'].
The sum of the values in descending part i.e., '10' is greater than the ascending part i.e., '8'.
So the answer for this case is '1'.
*/
int findTheLarger(int n, vector<int> &v) {
    int sum1 = 0, sum2 = 0, ind = 0;
    for (int i = 0; i < n - 1; i++) {
        sum1 += v[i];
        if (v[i] >= v[i + 1]) {
            ind = i;
            break;
        }
    }
    if (v[n - 2] < v[n - 1]) {
        sum1 += v[n - 1];
        return 0;
    }
    for (int i = ind; i < n; i++) {
        sum2 += v[i];
    }
    // cout << sum1 << " " << sum2 << endl;
    if (sum1 > sum2) return 0;
    if (sum1 < sum2) return 1;
    return -1;
}
