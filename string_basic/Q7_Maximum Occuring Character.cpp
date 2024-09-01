/* Link:-https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=1&category=Strings&difficulty=Basic&status=unsolved&sortBy=submissions
*/

char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>m;
        for(int i=0; i<str.length(); i++){
            m[str[i]]++;
            
        }
        int max=0;
        int ans;
        for(auto it:m){
            if(it.second>max){
                ans=it.first;
                max=it.second;
            }
           
        }
         return ans;
        
    }
