//Approach 1. using set taking o(n) space:

ListNode* reverseList(ListNode* head) {
        stack<int>s;
        ListNode* temp=head;
         ListNode* temp2=head;

        while(temp!=nullptr){
            s.push(temp->val);
            temp=temp->next;

        }
         while(temp2!=nullptr){
            int data = s.top();
             s.pop();
            temp2->val=data;
            temp2=temp2->next;

        }
        return head;
}
//----------Approach 2.---------------------

//using three pointer space :o(1) and time o(n)

struct Node* reverseList(struct Node* head) {
        if(head==NULL || head->next==NULL)return head;
        
        struct Node* curr =head;
        struct Node* prev =NULL;
        struct Node* forward=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            }
        head=prev;
        return head;
}
