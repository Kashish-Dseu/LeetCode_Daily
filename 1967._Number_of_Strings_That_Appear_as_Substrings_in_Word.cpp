/*
Problem Name: 1967. Number of Strings That Appear as Substrings in Word 
Difficulty: Easy
Date: 29/06/2026
*/
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n= patterns.size();
        int ans=0;
        for(int i=0; i<n; i++){
            if(word.contains(patterns[i])){
                ans++;
            }
        }
        return ans;
    }
};
