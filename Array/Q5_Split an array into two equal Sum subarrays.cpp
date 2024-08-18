/* https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1 */
bool canSplit(vector<int>& arr) {
        // code here
        double sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            
        }
        double halfSum=sum/2.0;
        double sum2=0;
        for(int i=0; i<arr.size(); i++){
            sum2+=arr[i];
            if(sum2==halfSum){
                return true;
            }
            if(sum2>halfSum) return false;
            
        }
        return false;
    }
