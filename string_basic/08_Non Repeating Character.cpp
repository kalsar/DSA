/*
Input:
s = hello
Output: h
Explanation: In the given string, the first character which is non-repeating is h, as it appears first 
and there is no other 'h' in the string.

Link: https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1?page=1&category=Strings&difficulty=Easy&status=unsolved&sortBy=submissions
  */

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char,int>um;
       
       for(auto x:S){
           um[x]++;
         }
         for(int i=0; i<S.length(); i++){
             if(um[S[i]]==1){
                 return S[i];
             }
         }
         return '$';
         
    }

};
