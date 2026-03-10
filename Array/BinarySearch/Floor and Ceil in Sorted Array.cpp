class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {


        int n=nums.size();
        int s=0;
        int e=n-1;
        int f=-1;
        int c=-1;
    
      
    // for finding floor
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<=x){
            f = nums[mid]; 
                s=mid+1;

            }
            else{
             e=mid-1;

            }
        
            
        }

    // for finding ceil

    // Reset pointers for ceil search
        s = 0;
        e = n - 1;
        
        // For finding ceil
        while(s <= e) {
            int mid = s + (e - s) / 2;
            if(nums[mid] >= x) {
                c = nums[mid];  // Store the VALUE, not index
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

      
   return {f,c};
        
    }
};

