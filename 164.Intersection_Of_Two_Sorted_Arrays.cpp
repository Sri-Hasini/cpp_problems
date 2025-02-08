// Intersection Of Two Sorted Arrays - code360 (easy)
//https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?topList=top-google-coding-interview-questions&problemListRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=1&search=&company%5B%5D=Google&company%5B%5D=Apple&company%5B%5D=Amazon&company%5B%5D=Microsoft&difficulty%5B%5D=Easy&sort_entity=avg_time&sort_order=ASC&customSource=studio_nav
/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/
#include <bits/stdc++.h> 
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	unordered_map<int,int> m1;
	for (int i = 0; i < n; i++) {
		m1[arr1[i]]++;
	}
	vector <int> v;
	for (int i = 0; i < m; i++) {
		if (m1.find(arr2[i]) != m1.end()) {
			if (m1[arr2[i]] > 0) {
			v.push_back(arr2[i]);
			m1[arr2[i]]--;
			}
		}
	}
	// sort(v.begin(), v.end());
	return v;
}
