

class Solution {
public:

 long long int nthSquare(int m, int n){
   long long int ans=1;
    for(int i=1; i<=n; i++){
        ans*=m;

    }
    return ans;
}
  int NthRoot(int N, int M) {

        int s=1;
        int e=M;
        int ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            long long int square=nthSquare(mid,N);
            if(square==M){
                return mid;
            }
            else if(square<M){
                ans=mid;
                s=mid+1;

            }
            else{
                e=mid-1;
            }
            
        }
        return -1;
       
    }
};
