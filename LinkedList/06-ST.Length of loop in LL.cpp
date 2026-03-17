//Approach : better using hashing 

---Code-----

  /*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        map<ListNode*, int>mpp;
        ListNode *it=head;
        int time=1;
        while(it!=NULL){
            if(mpp.find(it)!=mpp.end()){
                int val=mpp[it];
                return time-val;

            }
            mpp[it]=time;
            time++;
            it=it->next;
        }
        return 0;


    }
};
