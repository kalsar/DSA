
Approach: 1


  Time Complexity: O(n)
  Space Complexity: O(n)


  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        int idx=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                arr[idx++]=nums[i];
            }

        }
           // Fill the remaining positions with zeros
        for(int i = idx; i < n; i++) {  // Fixed: corrected loop condition
            arr[i] = 0;
        }
    

      for(int i=0; i<n; i++){
           nums[i]=arr[i];
        }
    }
};




Approach: 2 In-place algorith 


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int first=0;
        int second=1;

      while(second<n){
        if(nums[first]!=0){
            first++;
            second++;
        }
        else if(nums[second]!=0){
            int temp=nums[first];
            nums[first]=nums[second];
            nums[second]=temp;
            first++;
            second++;
        }
        else{
            second++;
        }
      }
        
    }
};




