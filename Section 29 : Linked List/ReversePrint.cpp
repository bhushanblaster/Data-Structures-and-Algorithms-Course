void reversePrint(struct Node* head)
{
  if(head == NULL)
      return;
  reversePrint(head->next);
  cout<<head->data<<" ";
}
