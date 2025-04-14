#include <iostream>
using namespace std;
int main()
{
    int a=7;
    int *ptr=&a;
    cout<<"Value Of A:"<<a<<endl;
    cout<<"Address Of A:"<<ptr<<endl;
    cout<<"Pointer value:"<<*ptr<<endl;
    cout<<"Address Of Pointer:"<<&ptr<<endl;
    return 0;
}