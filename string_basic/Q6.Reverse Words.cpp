/* https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?page=1&category=Strings&sortBy=submissions */
  

string reverseWords(string S) 
    { 
        stack<string>st;
        string tempStr="";
        string result="";
        
          for(int i=0; i<S.size(); i++){
               if(S[i]!='.'){
                tempStr.push_back(S[i]);
            }
            else{
                st.push(tempStr);
                st.push(".");
                tempStr="";
            }
        }
         st.push(tempStr);
        while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
    } 
