//Single Number II - code360 (easy)
//https://www.naukri.com/code360/problems/element-that-appears-once_1092888?topList=top-google-coding-interview-questions&problemListRedirection=true&leftPanelTabValue=PROBLEM
/*
You are given an arbitrary array ‘arr’ consisting of N non-negative integers, where every element appears thrice except one. You need to find the element that appears only once.
*/
int elementThatAppearsOnce(vector<int> arr) {
	map <int,int> m;
	for (int i = 0; i < arr.size(); i++) {
		m[arr[i]]++;
	}
	for (auto i : m) {
		if (i.second == 1) {
			return i.first;
		}
	}
}
