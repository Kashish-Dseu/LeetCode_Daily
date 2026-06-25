/*
Problem Name: 3737. Count Subarrays With Majority Element I 
Difficulty: Medium
Date: 25/06/2026
*/
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        vector<int> arr = nums;
        for(int i=0; i<n; i++){
            int freq = 0;
            for(int j=i; j<n; j++){
                if(arr[j] == target) freq++;
                int len = j-i+1;
                if(freq>len/2) ans++;
            }
        }
        return ans;
    }
};
