/*https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1 */

class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
         int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
            }
            int pos=cnt/2+1;
            Node* temp1=head;
            
            while(pos>1){
                pos--;
                temp1=temp1->next;
            }
            return temp1->data;
        
    }
};
