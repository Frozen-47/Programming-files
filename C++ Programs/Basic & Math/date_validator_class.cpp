#include <iostream>
using namespace std;
class date {
	int day,month,year;
public:
	void input() {
		int v1,v2,v3;
		cout<<"Enter the year:";
		cin>>v3;
		cout<<"Enter the month:";
		cin>>v2;
		cout<<"Enter the day:";
		cin>>v1;
		cout<<endl;

		day=v1;
		month=v2;
		year=v3;
	}

	void validate() {
		if(year>1900&&year<2026) {
			if(month>0&&month<13&&month!=2) {
				if(day>0&&day<32) {
					cout<<"The date is valid";
				}

				else {
					cout<<"The date is invalid";

				}
			}
			else if(month==2) {
				if(day>0&&day<29) {
					cout<<"The date is valid";
				}
				else {
					cout<<"The february has 28 days";

				}
			}
			else {
				cout<<"The month is invalid";
			}
		}
		else {
			cout<<"The year is invalid";
		}
	}
};
int main()
{
	date d1;
	d1.input();
    d1.validate();
	return 0;
}