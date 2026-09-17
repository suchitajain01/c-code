#include <iostream>
using namespace std;

struct node{

    int data;
    struct node* next;


};

node* getNode()
{
  node *p;
  p =(node*)malloc(sizeof(struct node));
  return p;


};

node* InsBeg(node *head, int x)
{
node *p;
p = getNode();
p->data=x;
p->next=head;
head= p;
return head;



}

 void Transverse(node *head)
{
   node*p;
   p =  head;
   while(p!=NULL)
   {
      cout<<p->data<<" ,"<<endl;
      p = p->next;

   }
}

node* InsAft(node *head, node *p, int x)
{





}


 node* InsEnd(node *head , int x)
{

node*q;
q = getNode();
q->data =x;
q->next = NULL;
if(head == NULL)
head = q;

else
{
  node*p;
  p = head;
  while(p->next!=NULL)
  p=p->next;

  p->next = q;
}

return head;


}



int main()
{
 node *head = NULL;
 head = InsBeg(head,1);
 head = InsBeg(head,2);
 head = InsBeg(head,3);
 head = InsBeg(head,4);

 head = InsEnd(head, 10);
 head = InsEnd(head, 20);
 head = InsEnd(head, 30);
 
 node *p =  head;
 int pos = 1;
 if(pos==1)
 {
    head = InsBeg(head,400);
 }

 else
 {

    for(int i =1;i <pos;i++)
    {
        p=p->next;
        head  = InsAft(head, p, 300);
    }


 }




return 0;

}


