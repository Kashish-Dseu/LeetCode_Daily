/*
Problem Name: 3536. Maximum Product of Two Digits  
Difficulty: Easy
Date: 25/07/2026
*/
class Solution {
public:
    int maxProduct(int n) {
        int ans =0;
        string str = to_string(n);
        for(int i=0; i<str.size(); i++){
            for(int j=i+1; j<str.size(); j++){
                int p= (str[i] - '0') * (str[j] - '0');
                ans= max(p, ans);
            }
        }
        return ans;
    }
};
