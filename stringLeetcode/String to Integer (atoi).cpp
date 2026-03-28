Leetcode :8


  class Solution {
public:
    int myAtoi(string s) {
        if(s.length() == 0) return 0;
        
        int i = 0;
        // Skip leading whitespace
        while(i < s.size() && s[i] == ' ') {
            i++;
        }
        
        // Handle sign
        int sign = 1;
        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // Process digits
        long ans = 0;
        int MAX = INT_MAX, MIN = INT_MIN;
        
        while(i < s.size() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            
            // Check for overflow
            if(sign == 1 && ans > MAX) return MAX;
            if(sign == -1 && -ans < MIN) return MIN;
            
            i++;
        }
        
        return (int)(sign * ans);
    }
};
