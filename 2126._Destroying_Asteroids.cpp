/*
Problem Name: 2126. Destroying Asteroids 
Difficulty: Medium
Date: 31/May/2026
*/
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n= asteroids.size();
        long long ans = mass;
        sort(asteroids.begin(), asteroids.end());
        for(int i=0; i<n; i++){
            if(ans>=asteroids[i]){
                ans+= asteroids[i];
            }
            if(ans<asteroids[i]) return false;
        }
        return true;
    }
};
