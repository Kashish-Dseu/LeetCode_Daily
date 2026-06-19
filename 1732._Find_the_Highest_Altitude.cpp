/*
Problem Name: 1732. Find the Highest Altitude 
Difficulty: Easy
Date: 19/06/2026
*/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a = 0;
        int ans = 0;
        for (int i : gain) {
            a += i;
            ans = max(ans, a);
        }
        return ans;
    }
};
