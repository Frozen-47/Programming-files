#include<iostream>
using namespace std;
class stack{
    private:
      int top;
      int arr[10];
      
    public:
       stack(){top=-1;}
       void push(int val){
           if(top>=4){
               cout<<"Stack Overflow!!!\n";
           }
           else{
               arr[++top]=val;
               cout<<val<<"Pushed into Stack.\n ";
           }
       }
       void pop(){
           if(top<0){
               cout<<"Stack Underflow!!!\n";
           }
           else{
               cout<<arr[top--]<<" popped from Stack\n";
           }
       }
       void display(){
           if(top<0){
               cout<<"Stack is empty!!!\n";
           }
           else{
               cout<<"Stack elements:";
               for(int i=0;i<=top;i++){
               cout<<arr[i]<<" ";
               
               
           }cout<<endl<<endl;
       }
}
};
int main(){
    stack s;
    s.push(100);
        s.push(90);
            s.push(80);
                s.push(70);
                s.push(60);

    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}