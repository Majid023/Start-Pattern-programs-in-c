#include<conio.h>
#include<stdio.h>

int main() {
	
	pattern();
	
	getch();
	return 0;
}

void pattern() {
	int i,j,k;
	
	for(i=1; i<=20; i++) {
		
		for(j=40-i; j>=1; j--)
			printf(" ");

		for(k=1; k<=i; k++)
			printf(" *");
			
		printf("\n");
		i++;
			
	}
}
