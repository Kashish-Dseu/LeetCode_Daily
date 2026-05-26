/*
Problem Name:3120. Count the Number of Special Characters I
Difficulty: Easy
Date: 26/May/2026
*/
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<bool> lower(26, false);
        vector<bool> upper(26, false);
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                lower[c - 'a'] = true;
            } else if (c >= 'A' && c <= 'Z') {
                upper[c - 'A'] = true;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (lower[i] && upper[i]) {
                count++;
            }
        }
        return count;
    }
};
