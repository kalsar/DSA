//Note: Since the output could be large, print the answer modulo 10^9+7.
int Maximize(vector<int> &arr) {
        // Complete the function
        int n=arr.size();
          int mod=1e9+7;
        sort(arr.begin(),arr.end());
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=1LL*i*arr[i];
            sum%=mod;
            
        }
        
        return sum;
    }
