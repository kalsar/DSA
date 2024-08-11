/* Input:
S = "geeks  for geeks"
Output: geeksforgeeks
Explanation: All the spaces have been 
removed. */

string modify (string s)
    {
        //code here.
        string ans="";
        for(int i=0; i<s.size(); ++i){
            if(s[i]!=' '){
                ans+=s[i];
            }
        }
        return ans;
    }
