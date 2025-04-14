#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number one by one:\n";
    cin>>num;
    while(num!=0){
        cin>>num;
        sum+=num;
    }
    cout<<"The sum of the numbers before zero is:"<<sum;
    return 0;
}