Approach 1:
int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
         return 0;
        int count=0;
       for(int i=0; i<s.length(); i++){
             unordered_set<char>st;

             for(int j=i; j<s.length(); j++){
                if(st.find(s[j]) !=st.end()){
                    count=max(count,j-i);
                    break;
                   }
                   else{
                     st.insert(s[j]);
                   }
             }
             count = max(count, (int)st.size());
        }
        return count;
    }

//Approach 2. :Optimal 


 int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
         unordered_set<char> st; 
        int l = 0; 
        int maxLength = 0; 

        for (int i = 0; i < s.length(); i++) {
            
            while (st.find(s[i]) != st.end()) {
                st.erase(s[l]);
                left++;
            }
            st.insert(s[i]); 
            maxLength = max(maxLength, i - l + 1); 
        }

        return maxLength; 
    
        
    }
