/*
Problem Name: 1979. Find Greatest Common Divisor of Array   
Difficulty: Easy
Date: 18/07/2026
*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return gcd(nums[0],nums[n-1]);
    }
};
