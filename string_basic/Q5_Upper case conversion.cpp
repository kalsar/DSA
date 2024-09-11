/*
Input:
str = "i love programming"
Output: "I Love Programming"
Explanation:
'I', 'L', 'P' are the first letters of 
the three words.
*/

string transform(string s)
{
    // code here
    string str="";
    str.push_back(s[0]-32);
    int i=1;
    while(i<s.length() ){
        
         if(s[i]==' ' && i + 1 < s.length()){
         str.push_back(s[i]);
          i++;
          str.push_back(s[i]-32);
    }
        
        else{
            
        str.push_back(s[i]);
        }
        
        i++;
        
        
    }
    return str;
    
       
    }
