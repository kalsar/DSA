Leetcode:34
// Approach 1:
Bute force:
O(n)
intution: Linear search  


Approach 2: Using lower bound and Upper bound 
Time: O(2logn)

-------------------Code------------------------------------------------

class Solution {
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

    int upperBound(vector<int> &nums, int x){
      int n=nums.size();
        int s=0;
        int ans=n;
        int e=n-1;
  
        while(s<=e){
         int mid=s+(e-s)/2;
            if(nums[mid]>x){
                ans=mid;
                e=mid-1;

            }
            else if(nums[mid]<=x){
                s=mid+1;
            }
        }
        return ans;
        
    }
        
        
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        int lb=lowerBound(nums, target);
        if(lb==n || nums[lb]!=target){
             return {-1,-1};

        }
        else{
         return {lb, upperBound(nums,target)-1};

        }
    

        
    }
};



Approach 3. Optimal soluction;

.........................Code.............................

vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        vector<int>ans(2,-1);

        while(start<=end){

            int mid=start+((end-start)/2);  

            if(nums[mid]==target){
                int left=mid;
                while(left>0 and nums[left-1]==target){
                    left--;
                }

                int right=mid;
                while(right<n-1 and nums[right+1]==target){
                    right++;
                }

                 ans[0]=left;
                 ans[1]=right;
                 return ans;

             }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }

       return ans;
        
    }
