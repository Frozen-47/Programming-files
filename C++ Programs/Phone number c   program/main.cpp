#include <iostream>
using namespace std;

int main()
{
    long long int n,rem,sum=0;
    cout<<"Enter Your PhoneNumber:";
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"The Sum of the digits is:"<<sum;

    return 0;
}