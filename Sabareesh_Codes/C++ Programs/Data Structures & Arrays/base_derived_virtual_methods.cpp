#include<iostream>
using namespace std;
class base {
public:
	int a;
	void show() {
		cout<<a;
	}
};
class dr:public base {
public:
	int b;
	void show() {
		cout<<endl<<a;
		cout<<endl<<b;
	}
};
int main() {
	base *bptr;
	base obj;
	bptr=&obj;
	bptr->a=100;
	bptr->show();
	
	
	
	dr bbj;
	dr abj;
	bptr=&abj;
	bptr->a=10;
    base *aptr;
	
	aptr=&abj;
	aptr->b=10;
	bptr->show();
    
      


	return 0;

}