/*
Problem Name: 1464. Maximum Product of Two Elements in an Array  
Difficulty: Easy
Date: 27/07/2026
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans= max(ans, (nums[i]-1)*(nums[j]-1));
            }
        }
        return ans;
    }
};
