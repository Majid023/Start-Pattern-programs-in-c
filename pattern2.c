#include<conio.h>
#include<stdio.h>

int main() {
	
	pattern();
	return 0;
}

void pattern() {
	int i, j;
	
	for(i=10; i>=1; i--) {
		printf("\n");
		for(j=1; j<=i; j++) {
			printf("*");
		}
	}
}
