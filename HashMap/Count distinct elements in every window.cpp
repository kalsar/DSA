/* Link: https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?page=1&category=sliding-window&difficulty=Easy&sortBy=submissions

*/

vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>um;
        
        for(int j=0; j<k; j++){
            um[A[j]]++;
        }
        vector<int>ans;
        ans.push_back(um.size());
        
        for(int i=k; i<n; i++){
            if(um[A[i-k]]==1){
                um.erase(A[i-k]);
            }
            else{
                um[A[i-k]]--;
                
            }
            
            um[A[i]]++;
            
            ans.push_back(um.size());
        }
        return ans;
        
    }
