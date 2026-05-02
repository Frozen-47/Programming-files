#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    //input
    cout<<"Enter the Integer:";
    cin>>a;
    cout<<"Enter the Long:";
    cin>>b;
    cout<<"Enter the Character:";
    cin>>c;
    cout<<"Enter the Float:";
    cin>>d;
    cout<<"Enter the Double:";
    cin>>e;
    cout<<endl;
    //output
    cout<<"int , "<<a<<endl;
    cout<<"followed by long , "<<b<<endl;
    cout<<"followed by char , "<<c<<endl;
    printf("followed by float , %.3f\n",d);
    printf("followed by double , %.9lf\n",e);
    return 0;
}