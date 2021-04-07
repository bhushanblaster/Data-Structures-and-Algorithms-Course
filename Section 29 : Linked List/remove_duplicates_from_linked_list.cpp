//Remove duplicate element from sorted Linked List 
Node *removeDuplicates(Node *head)
{
 // your code goes here
 
 Node* p = head;
 if(!head || !head->next)
    return head;
 else
 {
     while(p->next)
     {
         if(p->data == p->next->data)
         {
             struct Node* temp = p->next;
             p->next = p->next->next;
             delete temp;
         }
         else
         {
             p=p->next;
         }
     }
     return head;
 }
}

//Remove duplicates from an unsorted linked list
 Node * removeDuplicates( Node *head) 
    {
     // your code goes here
      unordered_set<int>visited;
      if(!head || !head->next)
        return head;
      else
      {
          struct Node* p =head;
          visited.insert(p->data);
          while(p->next)
          {
              if(visited.find(p->next->data) != visited.end())
              {
                  struct Node* temp = p->next;
                  p->next = p->next->next;
                  delete temp;
              }
              else
              {
                  visited.insert(p->next->data);
                  p=p->next;
              }
          }
          return head;
      }
        
    }
