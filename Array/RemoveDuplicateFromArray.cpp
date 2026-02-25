Leetcode:26

  ---------------  Approch 1: Optimal ---------------------------

---------------  Approch 2: Optimal ---------------------------


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        int n=nums.size();
        
        for(int i=1; i<n; i++){
        if(nums[idx]!=nums[i]){
            idx++;
            nums[idx]=nums[i];
        }
        }
      
        return idx+1;
        
    }
};
