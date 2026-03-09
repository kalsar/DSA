LEETCODE 560

  //Brute force "
  // time complexity :O(n^3)

 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum=0;

                for(int m=i; m<=j; m++){
                    sum=sum+nums[m];
             
                }
                       if(sum==k){
                        count++;
                    }

            }
        }
        return count ;
    }
};
// better 

  // time complexity :O(n^2)



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++){
                int sum=0;
            for(int j=i; j<n; j++){
                sum=sum+nums[j];
            
                   if(sum==k){
                        count++;
                    }

            }
        }
        return count ;
    }
};



// Optimal 
space : O(n)
time: O(1)
  

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int PrefixSum=0;
        unordered_map<int,int>umap;
        umap[0]=1;
        for(int i=0; i<n; i++){
            PrefixSum+=nums[i];
            int remove=PrefixSum-k;
            count+=umap[remove];
            umap[PrefixSum]+=1;
     

            
    
        }
        return count ;
    }
};
