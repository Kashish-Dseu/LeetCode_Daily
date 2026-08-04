/*
Problem Name: 3731. Find Missing Elements 
Difficulty: Easy
Date: 04/08/2026
*/
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int curr= nums[0];
        for(int i = 0 ; i < n ; curr++, i++){
            if(curr< nums[i]){
                ans.push_back(curr);
                i--;
            }
        }
        return ans;
    }
};
