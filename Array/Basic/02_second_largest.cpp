
#include <bits/stdc++.h>
using namespace std;

int secondMax(int arr[] ,int n){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    
    for(int i=0; i<=n-1; i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
            }
            
        else if(arr[i]>secondLargest and arr[i]!=largest){
            secondLargest=arr[i];
        }
      }
    
return secondLargest;
}
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=secondMax(arr,n);
    cout << "Maximum Element:"<<result<<endl;
    return 0;
}
