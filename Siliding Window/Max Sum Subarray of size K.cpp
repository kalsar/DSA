 long maximumSumSubarray(int k, vector<int> &arr , int N){
        // code here 
        long long sum=0;
        for(int j=0; j<k; j++){
            sum+=arr[j];
            
        }
        
        long long maxSum=sum;
        for(int i=k; i<N; i++){
            sum+=arr[i] - arr[i - k];
            maxSum = max(maxSum, sum);
           
            
            
        }
        return maxSum;
    }
