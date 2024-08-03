ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;

        }
        int pos=cnt-n;
        if(pos==0){
            ListNode* temp =head;
            head=head->next;
            delete temp;
            return head;
        }
         ListNode* curr=head;
         ListNode* prev=nullptr;

        while(pos>0){
            prev=curr;
            curr=curr->next;
            pos--;


        }
       prev->next=curr->next;
       delete curr;
        return head;
}


// -------Now optimal approach-----------------
By Two pointer: slow and fast.
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* s=head;
         ListNode* f=head;
         while(n--){
            f=f->next;
         }
         if(f==NULL){
            return s->next;
         }
         while(f->next!=NULL){
            s=s->next;
            f=f->next;
         }
         s->next=s->next->next;
        
         return head;
       
        
    }
