#include<iostream>
using namespace std;

class queue{
    public:
int q[10],front=0,rear=0;

void enqueue(int data){
if (rear==10 && front ==0){
    cout<<"Queue is Full";
}
else {
    q[rear]=data;
    rear++;
}
}
void dequeue()
{
int no,i;
if (front==rear)
cout<<"queue is empty";
else
{
no=q[front];
front++;
cout<<"\n"<<no<<" -removed from the queue\n";
}
} ;
void display()
{
int i,temp=front;
if (front==rear)
cout<<"the queue is empty";
else
{
cout<<"\n element in the queue:";
for(i=temp;i<rear;i++)
{
cout<<q[i]<<" ";
}
}}
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
                int n1;
                cout<<"enter number"<<endl;
                cin>>n1;
                l.enqueue(n1);
            break;
            case 2:
                l.dequeue();
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
    if(ch=='n'){
        cout<<"Thanks for using my code"<<endl;
    return 0;
}}
