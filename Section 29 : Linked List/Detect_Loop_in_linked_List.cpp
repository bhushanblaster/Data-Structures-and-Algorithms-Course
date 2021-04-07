//Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.
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
