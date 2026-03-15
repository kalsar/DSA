
Leetcode :875. Koko Eating Bananas

// Optimal approach :

code :


class Solution {
public:

    bool canEat(vector<int>&v ,int mid , int h){
        int hoursTaken=0;
        for(int &x : v){
            hoursTaken+=x/mid;
            if(x%mid !=0){
                hoursTaken++;

            }

          }
        return hoursTaken<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int e=*max_element(piles.begin(), piles.end());
        while(s<e){
            int mid=s+(e-s)/2;
            if(canEat(piles,mid, h)){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
           return s;

    }
 


    };
