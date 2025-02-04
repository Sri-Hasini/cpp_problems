//Majority element - code360 (easy)
//https://www.naukri.com/code360/problems/majority-element_842495?topList=cracking-the-coding-interview-questions&problemListRedirection=true&practice_topic%5B%5D=Arrays&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map <int,int> m;
	for (int i = 0; i < n; i++) {
		m[arr[i]]++;
	}
	int maxi = 0, val = -1;
	for (auto i : m) {
		if (maxi < i.second) {
			maxi = i.second;
			val = i.first;
		}
	}
	if (maxi > n/2) return val;
	else return -1;
}
