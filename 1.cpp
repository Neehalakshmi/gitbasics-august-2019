#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
  int info;
  struct node*nxt;
}*head;
class single_list
{
 public:
    void insert(int);
    void delet();
    void display(); 
    void search();
    single_list()
   {
     head=NULL;
  }
};
void single_list::insert(int elmnt)
{
    struct node *tmp,*tmp2;
    tmp=new(struct node);
     if(head==NULL)
      {
        tmp->info=elmnt;
        tmp->nxt=NULL;
        head=tmp;
        cout<<"first element is inserted";
     }
    else
    {
      tmp2=head;
      while(tmp2->nxt!=NULL)
      {
        tmp2=tmp2->nxt;
      }
     tmp->info=elmnt;
     tmp->nxt=NULL;
     tmp2->nxt=tmp;
     cout<<"next element is insertsd";
   }
}
void single_list ::display()
{
   struct node *tmp;
   tmp=head;
   cout<<"the created list is:";
   while(tmp!=NULL)
   {
     cout<<tmp->info<<"=>";
     tmp=tmp->nxt;
  }
}
void single_list:: delet()
{
  if(head==NULL)
 {
   cout<"no element to delete";
 }
 else
 {
   struct node *tmp;
  cout<<"the element deleted is:"<<head->info;
  tmp=head;
  head=head->nxt;
  delete tmp;
 }
}
void single_list::search()
{
  int cnt=0,elmt;
  cout<<"\n enter the element to search;";
  cin>>elmt;
  struct  node * tmp;
  tmp = head;
  while(tmp!=NULL)
  {
    ++cnt;
    if(tmp->info==elmt)
   {
     cout<<"\n element found at"<<cnt<<"position in the list";
     break;
   }
   else
   {
     tmp=tmp->nxt;
   }
}
if(tmp==NULL)
 {
  cout<<"\n element is not found in the list";
 }
}
int main()
{
  single_list s;
  int elmt,ch;
  while(1)
  {
    cout<<"\n MENU"<<endl;
    cout<<"\n 1.create\n 2.display\n 3.delete\n 4.search\n 5.exit"<<endl;
    cout<<"enter the choice:";
    cin>>ch;
    switch(ch)
   {
   case 1:
              cout<"enter tne element:";
             cin>>elmt;
             s.insert(elmt);
            break;
   case 2:
            s.display();
            break;
   case 3:
           s.delet();
           break;
   case 4:
           s.search();
           break;
   case 5:
           exit(0);
           default:
           cout<<"check ur option";
  }
 }
}
         
