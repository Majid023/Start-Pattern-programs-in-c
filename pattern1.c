#include<conio.h>
#include<stdio.h>

int main() {
	
	pattern();
	
	getch();
	return 0;
}

void pattern() {
	int i, j;
	
	for(i=1; i<10; i++){
		
		printf("\n");
		for(j=1; j<=i; j++)
			printf("*");
	}
	
}
