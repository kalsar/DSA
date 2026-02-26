Approach: 1 

  Time complexity:O(n)
  Space complexity:O(n)


  class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n=nums.size();
        int arr[n];
        int d=k%n;
        int idx=0;
        for(int i=d; i<n; i++){
            arr[idx]=nums[i];
            idx++;
        }
      
           for(int i=0; i<d; i++){
            arr[idx]=nums[i];
            idx++;
        }
           for(int i=0; i<n; i++){
            nums[i]=arr[i];
        
        }


    }
};


Approach:2  optimal:


  Time complexity:O(n)
  Space complexity:O(1)

class Solution {
public:

void ReverseArray(vector<int>&arr, int start , int end ){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}
    void rotateArray(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        ReverseArray(nums,0,k-1);
         ReverseArray(nums,k,n-1);
          ReverseArray(nums,0,n-1);
        





    }
};
