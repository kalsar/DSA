//Brute force 


Time complexity: O(n²) 

Space complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }

        return {};
        
    }
};


//  Better soluction using hash map

Time Complexity: O(n)
Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mapStore;
        for(int i=0; i<n; i++){
            int num=nums[i];
            int needy=target-num;
            if(mapStore.find(needy)!=mapStore.end()){
                return{i,mapStore[needy]};


            }
            mapStore[num]=i;

        }
        return {};
        
    }
};






