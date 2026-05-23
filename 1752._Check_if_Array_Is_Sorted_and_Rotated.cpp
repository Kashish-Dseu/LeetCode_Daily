/*
Problem Name: 1752. Check if Array Is Sorted and Rotated
Difficulty: Easy
Date: 23/May/2026
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        vector<int> B(n);
        B=nums;
        sort(B.begin(), B.end());
        nums.insert(nums.end(), nums.begin(), nums.end());
        auto it = search(nums.begin(), nums.end(), B.begin(), B.end());
        if (it != nums.end()) return true;
        return false;
    }    
};
