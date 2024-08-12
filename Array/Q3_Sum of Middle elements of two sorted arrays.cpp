/*Given 2 sorted integer arrays arr1 and arr2 of the same size. Find the sum of the middle elements of two sorted arrays arr1 and arr2.

Examples:

Input: arr1 = [1, 2, 4, 6, 10], arr2 = [4, 5, 6, 9, 12]
Output: 11
Explanation: The merged array looks like [1, 2, 4, 4, 5, 6, 6, 9, 10, 12]. Sum of middle elements is 11 (5 + 6). 

*/


int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
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
        long long a=arr1[n-1];
        long long b=arr2[0];
        return a+b;
    }
