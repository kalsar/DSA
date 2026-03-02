

// Approach 1: Brute force 


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int num=nums[0];
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==num){
                count++;
                if(count>n/2){
                    return num;
                }
            }
            else{
                count=1;
                num=nums[i];
            }
          }
        return -1;
        
    }
};

// Second brute force :
first pick one element then search it in whole array then store count;


Approach :3  Better soluction

Time Complexity: O(nlohn )+O(n)
Space complexity: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int, int>hasMap;
    for(int i=0; i<n; i++){
        hasMap[nums[i]]++;

    }
    for(auto it: hasMap){
        if(it.second>n/2){
            return it.first;

        }
    }
    return -1;
        
    }
};


// Optimal soluction using 
Moose voiting algorithm:

Time Complexity: O(n)
Space complexity: O(1)
  



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int count=0;
        for(int i=0; i<n; i++){
            if(count==0){
                count=1;
                ele=nums[i];
            }
           else if(nums[i]==ele){
                count++;
        }
        else{
            count--;
        }
        
    }
    return ele;
    }
};


