
code:class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int FirstL=INT_MIN,SecondL=INT_MIN;
        int n=nums.size();

          if (n < 2)
        return -1;
        
        for(int i=0; i<n; i++){
            if(nums[i]>FirstL){
                SecondL=FirstL;
                FirstL=nums[i];
            }
         
            else if(nums[i]>SecondL && nums[i]!=FirstL){
                SecondL=nums[i];

            }
        }
            if(FirstL==SecondL || SecondL==INT_MIN ){
                return -1;

            }
            return SecondL;
        

      
    }
};
