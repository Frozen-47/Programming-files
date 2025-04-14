#include<iostream>
using namespace std;
int main(){
int n[5] = {2,3,4,5,6};
int i=4;
cout<<"index:   Value:"<<endl;
while(i>-1)
{
    cout<<"      "<<i<<"\t"<<"       "<<n[i]<<endl;
    i--;

}
return 0;
}