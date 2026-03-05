

// Brute force 
Time Complexity: O(n^2)
Space Complexity : O(n)

  ---------------------Code------------------------------------

  class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            bool leader=true;
            for(int j=i+1; j<n; j++){
                if(nums[j]>nums[i]){
                    leader= false;
                    break;
                }

            }
            if(leader){
                ans.push_back(nums[i]);

            }


         }
        return ans;
      
    }
};



          // Optimal approach :

Time Complexity: O(n)
Space Complexity: O(n)



  -----------------------------code--------------------------------------------------------

  class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        vector<int> ans;

        for(int i=n-1; i>=0; i--){
            if(nums[i]>maxx){
                maxx=nums[i];
                ans.push_back(nums[i]);
            }

        }

          
    reverse(ans.begin(), ans.end());
    return ans;
      
    }
};



  
