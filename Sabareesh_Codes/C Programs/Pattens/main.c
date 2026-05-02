#include <stdio.h>

int main() {
	int i, j;
	int n;
	char a;
	printf("ENTER WHAT DO YOU WANT FOR\nFORWARD 1\tREVERSE 2\tFORWARD 3\nREVERSE 4\tFORWARD 5\tREVERSE 6\n");
	scanf("%c", &a);
	printf("ENTER HOW MANY TIME DO YOU WANT : ");
	scanf("%d", &n);
	if(a == '1') {
		for(i = 1; i <= n; i++) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else if(a == '2') {

		for(i = n; i >= 1; i--) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
		else if(a == '3') {

			for(i = 1; i <= n; i++) {
				for(j = 1; j <= i; j++) {
					printf("%d",i);
				}
				printf("\n");
			}
		}
		else if(a == '4') {

			for(i = n; i >= 1; i--) {
				for(j = 1; j <= i; j++) {
					printf("%d",i);
				}
				printf("\n");
			}
		}
		else if(a == '5') {

			for(i = 1; i <= n; i++) {
				for(j = 1; j <= i; j++) {
					printf("%d",j);
				}
				printf("\n");
			}
		}
		else if(a == '6') {

			for(i = n; i >= 1; i--) {
				for(j = 1; j <= i; j++) {
					printf("%d",j);
				}
				printf("\n");
			}
		}
		else {
			printf("PLEASE ENTER A VALID INPUT");
		}

		return 0;
	}