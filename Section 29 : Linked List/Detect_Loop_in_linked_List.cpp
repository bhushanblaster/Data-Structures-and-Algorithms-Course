bool detectLoop(Node* head)
    {
       struct Node* slow = head,*fast = head;
       bool ret = false;
       while(fast->next && fast->next->next)
       {
           slow = slow->next;
           fast = fast->next->next;
           if(slow==fast)
           {
              ret = true;
              break;
           }
       }
       return ret;
       
    }
