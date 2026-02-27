
Approach 1:
// This approach will faild when input is to large 
Time Complexity: O(n)
Space Complexity: O(1)

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
    int n=arr.size()+1;
        
    int totalSum=(n*(n+1))/2;
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }
    return totalSum-sum;
        
    }
};

---------------------------------------------------------------------------------------------------------------------
  approach 2:
  // using xor:

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int result=n;

        for(int i=0; i<n; i++){
            result^=i;
            result^=nums[i];

        }
        return result;
    }
};
