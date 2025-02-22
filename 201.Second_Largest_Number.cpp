// Second Largest Number - code360 (easy)
//https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM
//https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/
/*
You have been given an array ‘a’ of ‘n’ unique non-negative integers.
Find the second largest and second smallest element from the array.
Return the two elements (second largest and second smallest) as another array of size 2.
*/
/*----------------------------------------- O P T I M A L      A P P R O A C H ------------------------------------------
We would require four variables: small,second_small, large, and second_large. Variable small and second_small are initialized to INT_MAX while large and second_large are initialized to INT_MIN.

Second Smallest Algo:
-------------------
If the current element is smaller than ‘small’, then we update second_small as small and small variable as a[i]
Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’ as a[i]
Once we traverse the entire array, we would find the second smallest element in the variable second_small.

Second Largest Algo:
--------------------
If the current element is larger than ‘large’ then update second_large as large and large variable as a[i]
Else if the current element is larger than ‘second_large’ then we update the variable 'second_large' as a[i]
Once we traverse the entire array, we would find the second largest element in the variable second_large.
Here’s a quick demonstration of the same.
*/
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector <int> ans;
    if (n < 2) {
        ans.push_back(-1);
        return ans;
    }
    int small = INT_MAX, second_small = INT_MAX;
    int large = 0, second_large = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < small) {
            second_small = small;//store the previous small 
            small = a[i];
        }
        else if (a[i] < second_small && a[i] != small) {
            second_small = a[i];
        }
        if (a[i] > large) {
            second_large = large;//store the previous large
            large = a[i];
        }
        else if (a[i] > second_large && a[i] != large) {
            second_large = a[i];
        }
    }
    ans.push_back(second_large);
    ans.push_back(second_small);
}
