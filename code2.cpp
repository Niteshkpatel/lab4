#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

};

class StackLL{
   public:
    node *head,*tail;
    int n=0;
    StackLL(){
    head=NULL;
    tail=NULL;
    }

void push(int d){
node* temp=new node;
temp->data=d;
temp->next=NULL;

if(tail==NULL){
    head=temp;
    tail=temp;
    n++;
}
else {
    temp->next=tail;
    tail=temp;
    n++;
}
}
void pop(){
if(tail==NULL){
    cout<<"Queue is empty\n";
}
else if(tail==head){
    node *temp=tail;
    delete temp;
    head=NULL;
    tail=NULL;
}
else{
node *temp=tail;
tail=tail->next;
delete temp;
n--;
}
}
void display(){
node *temp=tail;
if(tail==NULL){
	cout<<"there is nothing to show"<<endl;
	}
else{
while(temp!=head){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->data;
}}
void makeq(node * tail){
node *temp=tail;
if (tail!=NULL){
while(temp->next!=NULL){
				push(temp->data);
				temp=temp->next;
			}
			push(temp->data);
}
}
void del(){
while(tail!=NULL){
    pop();
}
}
};

class queue{
StackLL stack1,stack2;
public:

void push(){
    int num,x;
cout<<"Enter the number of data : ";
cin>>num;
for(int i=0; i<num ; i++){
    cout<<"Enter element "<<i+1<<" : ";
    cin>>x;
    stack1.push(x);

}
stack2.del();
stack2.makeq(stack1.tail);
}
void pop(){
stack2.pop();
stack1.del();
stack1.makeq(stack2.tail);
}

void disp(){
stack1.display();
}

};

int main(){
queue l;
int a;
char ch='y';
    while(ch!='n')
    {
        cout<<"1-Push,2-Pop,3-Display"<<endl;
        int cho;
        cin>>cho;
        switch(cho)
            {
            case 1:
                l.push();
            break;
            case 2:
                l.pop();
            break;
            case 3:
                l.disp();
            break;
            default:
                cout<<"Invalid choice"<<endl;
            }
        cout<<"Do you want to continue,if no press n,if yes press any bottom"<<endl;
        cin>>ch;
        }
    if(ch=='n')
        cout<<"Thanks for using my code"<<endl;
    return 0;
}



