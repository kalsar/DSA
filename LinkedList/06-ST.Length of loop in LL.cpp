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

/// Approac Optimal : using slow and fast pointer

-----------------------------------------------------------------code ---------------------------------------------------------------------------------
  class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
       
        ListNode *slow=head;
        ListNode *fast=head;
      
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                int count=1;
                fast=fast->next;

                while(slow!=fast){
                    count++;
                    fast=fast->next;

                 }
                return count;
            }
          
        }
        return 0;

 
    }
};
