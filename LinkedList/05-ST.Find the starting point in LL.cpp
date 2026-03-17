// better soluction by hasing 


---Code-----

  class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp=head;
        unordered_set<ListNode*>st;
        while(temp!=NULL){

                // If node already exists in set, cycle detected
            if (st.find(temp) != st.end()) {
                return temp;  // This is the start of cycle
            }
            
            // Otherwise, insert and move forward
            st.insert(temp);
            temp = temp->next;
        

           
        }
        return NULL;

        
    }
};



// Optimal  : by slow and fast pointer

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
         ListNode *fast=head;
    
         while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
             if(slow==fast){
                fast=head;
                while(slow!=fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
             }

         }

         return NULL;

        
    }
};
