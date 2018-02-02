#include<iostream>
using namespace std;

class stack{
    int top;
public:
    int a[100];
    int n=0;
stack(){
top=0;
}
void push(int data){
    if(top == 100 -1) { // overflow case.
			cout<<"Error: stack overflow\n";
			return;
		}
    a[++top]=data;
    n++;

}
void pop(){
    if(top == 0) { // If stack is empty, pop should throw error.
			cout<<"Error:Stack underflow\n";
			return;
    }
        int x = a[top--];
        n--;


}
void display(){
if(top == 0){
    cout<<"No elements to Display \n";
}
for(int i=top;i!=0;i--){
    cout<<a[i];
}
}
};
int main(){
stack l;
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
