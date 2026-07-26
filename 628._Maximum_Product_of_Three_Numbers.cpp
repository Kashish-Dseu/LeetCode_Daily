/*
Problem Name: 628. Maximum Product of Three Numbers 
Difficulty: Easy
Date: 26/07/2026
*/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int a= nums[n-1]*nums[n-2]*nums[n-3];
        int b= nums[0] * nums[1] * nums[n - 1];
        return max(a,b);
    }
};
