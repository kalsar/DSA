optimal:


class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mini=INT_MAX;
        int index=-1;
        while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[s]<=nums[e]){
              if(nums[s]<mini){
                mini=nums[s];
                index=s;
              }
            break;
        }
        
        if(nums[s]<=nums[mid]){
          if(nums[s]<mini){
                index=s;
                mini=nums[s];
            }
             s=mid+1;
        }
        else{
             e=mid-1;
             if(nums[mid]<mini){
                index=mid;
                mini=nums[mid];
                 
              }
                 
        }
              

            
    }
        
        return index;

       
    }
};
