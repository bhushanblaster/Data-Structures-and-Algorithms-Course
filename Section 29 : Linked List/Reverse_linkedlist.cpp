struct Node* reverseList(struct Node *head)
    {
        // return head of reversed list
        
        if(!head || !head->next)
            return head;
        else
        {
            Node* p  =NULL;
            Node* q = head;
            Node* r = head->next;
            while(r)
            {
                q->next = p;
                p = q;
                q=r;
                r=r->next;
            }
            q->next = p;
            head = q;
            return head;
        }
    }
