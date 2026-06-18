/*
Problem Name: 1344. Angle Between Hands of a Clock 
Difficulty: Medium
Date: 18/06/2026
*/
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = abs((30*hour)-(5.5*minutes));
        if(ans>180) ans= 360-ans;
        return ans;
    }
};
