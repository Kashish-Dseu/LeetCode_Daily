/*
Problem Name:3121. Count the Number of Special Characters II
Difficulty: Medium
Date: 27/May/2026
*/
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> upper, lower;
        int count = 0;
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            if (c & (1 << 5)) {                   
                lower[c] = i;                         
            } else {                                
                if (upper.find(c) == upper.end())
                    upper[c] = i;                      
            }
        }
        for (auto [a, i] : lower) {                   
            char u = a ^ ' ';                       
            if (upper.find(u) != upper.end()) {           
                if (upper[u] > i)                       
                    count++;
            }
        }
        return count;
    }
};
