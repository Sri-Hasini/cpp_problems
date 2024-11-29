//Watering Plants - leetcode(acc : 79%) (medium)
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int copy = capacity;
        int n = plants.size();
        int cnt = 0;
        for (int i = 0 ; i < n ; i++) {
            if(capacity >= plants[i]){
                cnt++;
                capacity -= plants[i];
            }
            else {
                cnt += 2*i;
                capacity = copy;
                i--;
            }
        }
        return cnt;
    }
};
