#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter age :";
	cin >> a;
	if(a > 18) {
		cout << "You can vote";
	}
	else {
		cout << "You can't vote";
	}
	return 0;
}