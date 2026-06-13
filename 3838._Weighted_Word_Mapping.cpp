/*
Problem Name:3838. Weighted Word Mapping  
Difficulty: Easy
Date: 13/06/2026
*/
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n= words.size();
        string s= "";
        for(int i=0; i<n; i++){
            int sum=0;
            for (int c : words[i]){
                sum+= weights[c - 'a'];
            }
            sum= sum%26;
            char c = 'z' - sum;
            s+= c;
        }
        return s;
    }
};
