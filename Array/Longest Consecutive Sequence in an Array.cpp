// Brute force ---

Time complexity: O(n^2)
  

class Solution {
public:

   bool linearSearch(vector<int> &arr, int num){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==num){
            return true;
        }
        }
    return false;
   }
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int maxx=1;

        for(int i=0; i<n; i++){
            int count=1;
            int curr=nums[i];
        while(linearSearch(nums,curr+1)==true){
              count++;
              curr+=1;
        }
        maxx=max(count, maxx);
        }
      return maxx;
        
    }
};


// Better approach----------------------------------

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int longest = 1;
        int currentStreak = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            // Skip duplicates
            if(nums[i] == nums[i-1]) {
                continue;
            }
            
            // Check if consecutive
            if(nums[i] == nums[i-1] + 1) {
                currentStreak++;
            } else {
                longest = max(longest, currentStreak);
                currentStreak = 1;
            }
        }
        
        // Don't forget to update longest after the loop
        longest = max(longest, currentStreak);
        
        return longest;
    }
};

/// optimal 
time complexity:O(3n)
space complexity: O(n)




class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        int longest = 1; 

        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    cnt+=1;
                
                }
                longest=max(cnt,longest);
            }
        }
        return longest;

    }
};


