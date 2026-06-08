/*
Problem Name: 2161. Partition Array According to Given Pivot 
Difficulty: Medium
Date: 08/06/2026
*/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n= nums.size();
        vector<int>ans ;
        for(int i=0; i<n; i++){
            if(nums[i] < pivot) ans.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
            if(nums[i] == pivot) ans.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
            if(nums[i] >pivot) ans.push_back(nums[i]);
        }
        return ans;
    }
};
