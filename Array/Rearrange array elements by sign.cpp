
//Brute force 
Time complexity:O(2n)
  Space complexity: O(n)

----------------------------------------------------------------------------------------

  class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int possitiveAr[n/2];
        int negativeArr[n/2];
        int k=0,m=0;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                possitiveAr[k++]=nums[i];

            }
            else{
              negativeArr[m++]=nums[i];

            }
        }
        for(int i=0; i<n/2; i++){
            nums[i*2]=possitiveAr[i];
            nums[i*2+1]=negativeArr[i];
        }
        return nums;
        
    }
};


// Second approach 
Better:
Tme Complexity =space complexity: O(n)




  class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int pos=0;
        int neg=1;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
        
    }
};
