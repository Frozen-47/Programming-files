#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int *ptr1=&a;
    int *ptr2=&b;
    char opr;
    cout<<"Enter A value:";
    cin>>a;
    cout<<"Enter B value:";
    cin>>b;
    cout<<"Enter the operation:";
    cin>>opr;
    switch(opr){
        case '+':
        cout<<"The sum is :"<<(*ptr1 + *ptr2);
        break;
        case '-':
        cout<<"The difference is :"<<(*ptr1 - *ptr2);
        break;
        case '*':
        cout<<"The product is :"<<(*ptr1 * *ptr2);
        break;
        case '/':
        if(*ptr!=0)
        cout<<"The division is :"<<(*ptr1 / *ptr2);
        else
        cout<<"Don't use zero";
        break;
        default:
        cout<<"Invalid input";
        }
    return 0;
}