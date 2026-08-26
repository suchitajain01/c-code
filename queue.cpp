#include <bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;


};

node *GetNode()
{
    int x;
    node *PQ;
    PQ->data = x;




};


node *DeQueue(node *PQ)
{
  if(PQ == NULL)
  {
    cout<<"Queue underflows";
    exit(1);

  }

  node *p;
  p = PQ;
  int x = p->data;
  PQ=PQ->next;
  delete(p);




}
{
   if(PQ == NULL)
   {
    cout<<"Queue Undeflows";
    exit(1);
   }

   node *p;
   p = PQ;
   int x = p->data;
   cout<<"Dequeued element:"<<x<<" "<<endl;


};


node *Enqueue (node *PQ)
{
node *curr, *prev;
curr = PQ;
prev = NULL;
node* R;
R = GetNode();
R->data = x;


if(prev == NULL)
{}


};


int main()
{
node *PQ;
PQ= NULL;
PQ = EnQueue(PQ,10);
PQ = EnQueue(PQ,20);
PQ = EnQueue(PQ,30);
PQ = EnQueue(PQ,40;
PQ = EnQueue(PQ,50);



node* p = PQ;
while(p!=NULL)
{
    cout<<p->data<<",";
    p = p->next;
}


cout<<endl<<endl;
PQ = DeQueue(PQ);
PQ = DeQueue(PQ);
PQ = DeQueue(PQ);
PQ = DeQueue(PQ);
PQ = DeQueue(PQ);
PQ = DeQueue(PQ);

return 0;
}