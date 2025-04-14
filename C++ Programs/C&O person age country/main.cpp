#include<iostream>
using namespace std;
class person {
	string name,country;
	int age;
public:
	void input(string x,int y,string z) {
		name=x;
		age=y;
		country=z;
	}
	void output() {
		cout<<"Person Name:"<<name<<endl<<"Person age:"<<age<<endl<<"Person country:"<<country<<endl;
	}

};
int main() {
	person n1;
	n1.input("Kavin",18,"India");
	n1.output();
	return 0;
}