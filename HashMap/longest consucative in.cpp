// brute force

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestConsecutive(vector<int>& nums){
        if(nums.empty()) return 0;
      
        int longest=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            int len=1;
            int start=nums[i];

            while(true){
                int found=linearSearch(start+1,nums);
                if(found==-1) break;
                 start = found;  
                len++;
               
            }
            longest=max(longest,len);


        }

        return longest;
        
    }
    private: 
    int linearSearch(int num, vector<int>& nums){
        for(int i=0; i<nums.size(); i++){
            if(num==nums[i]) return nums[i];
            
           }
        return -1;
        
    }
    
};

int main() {
   vector<int> nums= {0,3,7,2,5,8,4,6,0,1};
    Solution sol;

    cout << "length of longest consucative is:"<<sol.longestConsecutive(nums)<<endl;
    return 0;
}
