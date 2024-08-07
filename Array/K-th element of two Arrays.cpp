int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        int left=n-1;
        int right=0;
        while(left>=0 and right<m){
            if(arr1[left]>arr2[right]){
                swap(arr1[left],arr2[right]);
                left--,right++;
            }
            else{ break;}
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        if(k<=n){
            return arr1[k-1];
          
        }
        else{
            int i=k-n;
            return arr2[i-1];
        }
    }
