class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      if(x==1)
      {
          head=head->next;
          head->prev=NULL;
      }
      else
      {
          int count=1;
          Node *temp=head;
          while(temp!=NULL &&count !=x)
          {
              temp=temp->next;
              count++;
          }
          if(temp==NULL)
          {
              return head;
          }
          if(temp->next==NULL)
          {
              temp->prev->next=NULL;
          }
          else
          {
              temp->prev->next=temp->next;
              temp->next->prev=temp->prev;
          }
      }
      return head;
    }
};
