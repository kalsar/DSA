Approach 1: Brute Force:
Time Complexity: O((n+m) log(n+m))
Space Complexity: O(n+m)


------------------------------------------------------------------
  class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> st;
    
        for(int i=0; i<a.size(); i++){
            st.insert(a[i]);
        }
           for(int j=0; j<b.size(); j++){
            st.insert(b[j]);
        }
     // Transfer set elements to vector
        vector<int> ans(st.begin(), st.end());
        return ans;
        
    }
};

Approach : 2  Optimal 
// By two poiner :

  Time Complexity: O(n + m)
  Space Complexity: O(u) where u = number of unique elements

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
         
        vector<int> unionArr;
        while(i<n && j<m){
            if(a[i]<=b[j]){
                if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                    
                }
                i++;
            }
            else {
                 if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                    
                }
                j++;
            }
        }
        
    // Add remaining elements from array a
        while(i < n) { 
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        
        // Add remaining elements from array b
        while(j < m) { 
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;  
        }
            
             return unionArr;
        }
       
  
  
};
