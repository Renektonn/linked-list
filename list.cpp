#include <iostream>
using namespace std;

struct list{
  int data;
  list* next;
};

int main() {
    list * head    = new list;
    head->data=0;
    list * current = head;
  
    for(int i=1 ; i<=10 ; i++){
      current->next  = new list;
      current=current->next;
      
      int tem;
      cin>>tem;
      current->data=tem;
      
    }
    current->next=NULL;

    current=head;
    
    while(current!=NULL){
      cout<<current->data<<" ";
      current=current->next;
    }
  
    return 0;
}
