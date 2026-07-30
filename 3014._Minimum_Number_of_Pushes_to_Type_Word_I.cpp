/*
Problem Name: 3014. Minimum Number of Pushes to Type Word I  
Difficulty: Easy
Date: 30/07/2026
*/
class Solution {
public:
    int minimumPushes(string word) {
        auto q = word.size() >> 3, r = word.size() & 7;
        return ((q << 2) + r) * (q + 1);
    }
};
