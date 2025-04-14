#include <iostream>
using namespace std;
int main()
{
    int a=5;
    for(int i=1;i<=a;i++){
        if(i==3)
          continue;
        cout<<i<<endl;
    }
    
}