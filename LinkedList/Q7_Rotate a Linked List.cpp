/* Given the head of a singly linked list, the task is to rotate the linked list clockwise by k nodes,
i.e., left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal 
to length of the linked list. */
Node* rotate(Node* head, int k) {
        // Your code here
           if (!head || k == 0) return head;
           
        Node* head2=head;
        Node* itr=head;
        
        while(--k){
            itr=itr->next;
        }
        Node* end=itr;
        int cnt=0;
        while(end->next!=NULL){
            end=end->next;
            cnt++;
            
        }
        if(k+cnt==k){
            return head;
        }
        end->next=head2;
        head2=itr->next;
        itr->next=NULL;
        return head2;
        
        
        
    }
