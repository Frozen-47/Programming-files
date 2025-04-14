#include<iostream>
using namespace std;
class fact{
    public:
    int num;
    int product=1;
    void run(){
        for(int i=1;i<=num;i++){
            product=product*i;
            
        }
        cout<<"Factorial Of given number is :"<<product<<endl;
    }
};
int main(){
    fact first;
    cout<<"Enter a number:";
    cin>>first.num;
    first.run();
    return 0;
    
}