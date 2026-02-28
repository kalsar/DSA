//brute force -----
class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int sum = 0;
                // Calculate sum from i to j
                for(int s = i; s <= j; s++) {
                    sum = sum + nums[s];
                }
                if(sum == k) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};

// -----------better approach------
class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0; 
        
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                
                if(sum == k) {
                    int length = j - i + 1;  
                    maxLen = max(maxLen, length);  
                }
            }
        }
        return maxLen; 
    }
};


----------------------------------------------------------------------------------------------------------------------


Leetcode :53
Approach : Optimal by Kadanes algo
T.C: O(n);
...................Code.....................
 int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if(sum<0){
                sum=0;
            }

        }
        return maxSum;
        
    }
