Link: https://www.geeksforgeeks.org/problems/remove-spaces0128/1?page=1&category=Strings&difficulty=Basic&status=solved&sortBy=submissions
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
