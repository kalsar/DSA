class Solution {
public:
    int getLucky(string s, int k) {

        int sum=0;
        for(int i=0; i<s.size(); i++){
           int value=s[i]-'a'+1;
           sum += value / 10 + value % 10;
        }
    
       while(--k){
        int tempSum=0;
        while(sum>0){
            tempSum += sum % 10;
            
             sum /= 10;
           

        }
        sum = tempSum;
       }
       return sum;
        
    }
};
