#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

};

class StackLL{
    node *head;
public:
    int n=0;
    StackLL(){
    head=NULL;
    }

void push(int d){
node* temp=new node;
temp->data=d;
temp->next=NULL;

if(head==NULL){
    head=temp;
    head->next=NULL;
    n++;
}
else {
    temp->next=head;
    head=temp;
    n++;
}
}
void pop(){
node *temp=head;
head=head->next;
delete temp;
n--;
}
void display(){
node *temp=head;
for(int i=0; i<n ; i++){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}
};

int main(){
StackLL l;
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
                int n1;
                cout<<"enter number"<<endl;
                cin>>n1;
                l.push(n1);
            break;
            case 2:
                l.pop();
            break;
            case 3:
                l.display();
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



