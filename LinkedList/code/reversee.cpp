#include<iostream>
using namespace std;
struct Listnode{
    int val;
    Listnode * next;
    Listnode(int x): val(x),next(nullptr){}
};

Listnode *ReverseList(Listnode * head){
    if(head==nullptr) return nullptr;
Listnode *prev=nullptr;
Listnode *curr=head;
Listnode *next=head->next;
while(curr!=nullptr){
    curr->next=prev;
    prev=curr;
    curr=next;
    if(next!=nullptr) next=next->next;
}
return prev;
}
Listnode* createLinkedList(){
Listnode *head= nullptr;
Listnode *tail=head;
int n;
cout<<"Enter the size of LinkedList: "<<endl;
cin>>n;
for(int i=0;i<n;++i){
cout<<"enter the i+1 th element: ";
int val;
cin>>val;
Listnode *newNode=new Listnode(val);
if(head==nullptr){
    head=newNode;
    tail=newNode;
}else{
    tail->next=newNode;
    tail=newNode;
}

}    
return head;
}

void printList(Listnode *head){
Listnode * curr=head;
while (curr!=nullptr)
{
    cout<<curr->val<<"-> ";
    curr=curr->next;
}
cout<<"nullptr"<<endl;
}


int main(){
    //creating linkedList based on user input
    Listnode *head=createLinkedList();
    cout<<"List is: "<<endl;
    printList(head);

     Listnode *revHead=ReverseList(head);
    cout<<"reverse List is: "<<endl;
    printList(revHead);

}