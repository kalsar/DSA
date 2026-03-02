

//Brute force approach:--
// by selection sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
     
        for(int i=0; i<n-1; i++){
             int min_index=i;
            for(int j=i+1; j<n; j++){
                if(nums[j]<nums[min_index]){
                    min_index=j;
                }
            }
            int temp=nums[min_index];
            nums[min_index]=nums[i];
            nums[i]=temp;



        }
        
    }
};


// better approach 

Time complexity : O(2n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0,count3=0;

     
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count1++;
            }
            else if(nums[i]==1){
                count2++;
            }
            else{
                count3++;
            }
         
            }
            for(int j=0; j<count1; j++){
                nums[j]=0;
            }
              for(int j=count1; j<count2+count1; j++){
              nums[j]=1;
            }
                for(int j=count2+count1; j<n; j++){
                nums[j]=2;
            }
       }
};

// optimal using Dutch National Flag algorith

class Solution {
public:

  
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;

            }
            else{
                    swap(nums[mid], nums[high]);
              high--;


            }
        }
        
    }
};
