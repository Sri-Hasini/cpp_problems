//2391. Minimum Amount of Time to Collect Garbage - leetcode (medium) (acc : 85%)
//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/
/*
You are given a 0-indexed array of strings garbage where garbage[i] represents the assortment of garbage at the ith house. garbage[i] consists only of the characters 'M', 'P' and 'G' representing one unit of metal, paper and glass garbage respectively.
Picking up one unit of any type of garbage takes 1 minute.
You are also given a 0-indexed integer array travel where travel[i] is the number of minutes needed to go from house i to house i + 1.
There are three garbage trucks in the city, each responsible for picking up one type of garbage. 
Each garbage truck starts at house 0 and must visit each house in order; however, they do not need to visit every house.
Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.
Return the minimum number of minutes needed to pick up all the garbage.
  */
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g_truck = 0, p_truck = 0, m_truck = 0;
        string s;
        for (int i = 0; i < garbage.size(); i++) {
            s += garbage[i];
        }
        int sum = s.size();
        for (int i = 1; i < garbage.size(); i++) {
            for (int j = 0; j < garbage[i].size(); j++) {
                if (garbage[i][j] == 'G') {
                    for (int k = g_truck; k < i; k++) {
                        sum += travel[g_truck];
                        g_truck++;
                    }
                }
                else if (garbage[i][j] == 'P') {
                    for (int k = p_truck; k < i; k++) {
                        sum += travel[p_truck];
                        p_truck++;
                    }
                }
                else if (garbage[i][j] == 'M') {
                    for (int k = m_truck; k < i; k++) {
                        sum += travel[m_truck];
                        m_truck++;
                    }
                }
            }
        }
        return sum;
    }
};
