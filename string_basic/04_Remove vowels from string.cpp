/* Input: S = "welcome to geeksforgeeks"
Output: wlcm t gksfrgks
Explanation: Ignore vowels and print other
characters  */


bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    else return false;
}
		
	string removeVowels(string S){
	    string str="";
	    for(int i=0; i<S.size(); i++){
	        if(!isVowel(S[i])){
	            str.push_back(S[i]);
	            
	        }
	        
	    }
	    return str;
	}
