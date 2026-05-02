#include<iostream>

using namespace std;
class circle {
	float radius;
public:
	void values(float a) {
		radius =a;
	}
	void area() {
		float c = 3.14*radius*radius;
		cout<<"The area is:"<<c<<endl;

	}
	void crc() {
		float d = (2*3.14)*radius;
		cout<<"The circumference is:"<<d<<endl;
	}
};
int main() {
	circle r1;
	r1.values(7);
	r1.area();
	r1.crc();
	return 0;

}