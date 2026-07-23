/*
Problem Name: 3513. Number of Unique XOR Triplets I  
Difficulty: Easy
Date: 23/07/2026
*/
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n= nums.size();
        return 1 << (bit_width(n) - 3 / (n + 1));
    }
};
