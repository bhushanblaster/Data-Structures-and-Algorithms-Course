//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    int len = 0;bool loop = false;
    if(head)
    {
        struct Node* slow = head,*fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast=fast->next->next;
            if(slow == fast)
            {
                loop = true;
                break;
            }
        }
        
        if(loop)
        {
            fast = head;
            while(slow!=fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            do
            {
                len++;slow = slow=slow->next;
            }while(slow!=fast);
        }
    }
    
    return len;
}
