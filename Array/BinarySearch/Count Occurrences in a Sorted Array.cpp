
// approach !: use linear search 


// Approach 2 : Optimal 

class Solution {
public:
    int countOccurrences(const vector<int>& arr, int target) {
        // Your code goes here
        int n=arr.size();
        int start=0;
        int end=n-1;
        int count=0;
   

        while(start<=end){

            int mid=start+((end-start)/2);  

            if(arr[mid]==target){
                count++;
                int left=mid;
                while(left>0 and arr[left-1]==target){
                    left--;
                    count++;
                }

                int right=mid;
                while(right<n-1 and arr[right+1]==target){
                    right++;
                    count++;
                }

            
                 return count;

             }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }

       return count;
        
    }
};
