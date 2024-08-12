/* Input: 
S = "practice"
Output: prectica
Explanation: The vowels are a, i, e
Reverse of these is e, i, a. */

bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
        else return false;
    }
        string modify (string s)
        {
            //code here.
            int n=s.size();
            int i=0;
            int j=n-1;
            while(i<j){
                if(!isVowel(s[i])){
                    i++;
                } else if(!isVowel(s[j])){
                    j--;
                }
                else{ 
                //both are vowel
                swap(s[i],s[j]);
                i++,j--; }
                
             }
            return s;
        }
