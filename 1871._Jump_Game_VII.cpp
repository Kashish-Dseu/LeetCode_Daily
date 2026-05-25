/*
Problem Name: 1871. Jump Game VII
Difficulty: Medium
Date: 25/May/2026
*/
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n= s.size();
        int sum=0;
        if (s[n - 1] != '0') return false;
        vector<bool> reachable(n, false);
        vector<int> d(n + 1, 0);
        reachable[0] = true;
        if (minJump < n) {
            d[minJump] += 1;
        }
        if (maxJump + 1 < n) {
            d[maxJump + 1] -= 1;
        }
        for (int i = 1; i < n; ++i) {
            sum += d[i];
            if (s[i] == '0' && sum > 0) {
                reachable[i] = true;
                int a = i + minJump;
                int b = i + maxJump + 1;
                if (a < n) {
                    d[a] += 1;
                }
                if (b < n) {
                    d[b] -= 1;
                }
            }
        }
        return reachable[n - 1];
    }
};
