/* 
Input: 
s = "GeeksforGeeks"
Output: "skeeGrofskeeG" 
Explanation: Reverse string of "GeeksforGeeks" will be "skeeGrofskeeG"

*/

string revStr(string s) {
        // code here
        string str="";
        for(int i=s.size()-1; i>=0; i--){
            str.push_back(s[i]);
        }
        return str;
    }
// second approach: with out extra space
string reverseWord(string str)
    {
        int s=0;
        int e=str.size()-1;
        while(s<e){
            char temp=str[s];
            str[s]=str[e];
            str[e]=temp;
            s++;
            e--;
        }
        return str;
    }
