/*
Problem Name:3300. Minimum Element After Replacement With Digit Sum  
Difficulty: Easy
Date: 29/May/2026
*/
class Solution {
public:
    int minElement(vector<int>& nums) {
        int m = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int s =0;
            while(nums[i]>0){
            int r= nums[i]%10;
            s+=r;
            nums[i]/=10;
            }
            m = min(m, s);
        }
        return m;
    }
};
