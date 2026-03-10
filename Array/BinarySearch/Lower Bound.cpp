class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n=nums.size();
        int s=0;
        int ans=n;
        int e=n-1;
  
        while(s<=e){
         int mid=s+(e-s)/2;
            if(nums[mid]>=x){
                ans=mid;
                e=mid-1;

            }
            else if(nums[mid]<x){
                s=mid+1;
            }
        }
        return ans;
        
        
    }
};
