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
