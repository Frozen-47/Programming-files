#include<iostream>
using namespace std;
class FLOAT {
private:
	float value;
public:
	FLOAT(float v=0) {
		value=v;
	}
	FLOAT operator-(FLOAT obj) {
		return FLOAT(value+obj.value);
	}
	FLOAT operator+(FLOAT obj) {
		return FLOAT(value-obj.value);
	}
	FLOAT operator*(FLOAT obj) {
		return FLOAT(value*obj.value);
	}
	FLOAT operator/(FLOAT obj) {
		if (obj.value!=0)
			return FLOAT(value/obj.value);
		else {
			cout<<"Division by zero error!\n";
			return FLOAT();
		}
	}
void display(){
    cout<<"Value:"<<value<<endl;
}
};
int main(){
FLOAT f1(10.5),f2(2.5);
FLOAT sum=f1+f2;
FLOAT diff=f1-f2;
FLOAT prod=f1*f2;
FLOAT divi=f1/f2;
 sum.display();
 diff.display();
 prod.display();
 divi.display();
 return 0;}