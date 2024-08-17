/*
Given an array nums[], construct a Product Array nums[] such that nums[i] is equal to the product of all the elements of nums except nums[i].

Examples:

Input: nums[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation: For i=0, P[i] = 3*5*6*2 = 180.

  */
vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long Tpro=1;
         long long Expro=1;
         int cnt=0;
        vector<long long int>v;
        
        for(int i=0; i<nums.size(); i++){
            
            Tpro=Tpro*nums[i];
            
            if(nums[i]!=0){
                Expro=Expro*nums[i];
                
            }
            else{
                cnt++;
            }
            
        }
        
        for(int i=0; i<nums.size(); i++){
            
            if(cnt==0){
                long long int ele=Tpro/nums[i];
                v.push_back(ele);
                
            }
            else if(cnt==1){
                if(nums[i]==0){
                    v.push_back(Expro);
                }
                else{
                    v.push_back(0);
                }
            }
            else{
                v.push_back(0);
            }
           
            
            
        }
  return v;
}
