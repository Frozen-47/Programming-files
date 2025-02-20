#include<stdio.h>

int main() {
	char a;
	int b, c, d;
	float e;
	printf("ENTER FIRST NUMBER: ");
	scanf("%d", &b);
	printf("ENTER SECOND NUMBER: ");
	scanf("%d", &c);
	printf("WHAT OPERATION DO YOU WANT TO DO\nENTER HERE  :  ");
	scanf(" %c", &a);
	if (a == '+') {
		d = b + c;
		printf("THE SUM OF THESE NUMBERS IS: %d\n", d);
	} else if (a == '-') {
		d = b - c;
		printf("THE SUBTRACTION OF THESE NUMBERS IS: %d\n", d);
	} else if (a == '*') {
		d = b * c;
		printf("THE PRODUCT OF THESE NUMBERS IS: %d\n", d);
	} else if (a == '/') {
		if (c != 0) {
			e = (float)b / c;
			printf("THE DIVISION OF THESE NUMBERS IS: %.2f\n", e);
		} else {
			printf("DIVISION BY ZERO IS NOT ALLOWED.\n");
		}
	} else {
		printf("PLEASE ENTER A VALID INPUT.\n");
	}

	return 0;
}