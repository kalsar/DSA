
#include <bits/stdc++.h>
using namespace std;
pair<int,int> minMax(int arr[] ,int n){
    int minElement=arr[0];
    int maxElement=arr[0];
    
    for(int i=1; i<=n-1; i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
           }
        if(arr[i]<minElement){
            minElement=arr[i];
        }
       }
    return{maxElement,minElement};
    
}
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    pair<int,int>result=minMax(arr,n);
    
    cout << "Maximum Element:"<<result.first<<endl;
    cout << "Minimum Element:"<<result.second<<endl;
    return 0;
}
