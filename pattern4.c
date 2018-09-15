#include<conio.h>
#include<stdio.h>

int main() {
	
	pattern();
	
	getch();
	return 0;
}

void pattern() {
	int i, j, k;
	
	for(i=1; i<=30; i++) {
		
		for(j=i; j<=50; j++)
		    printf(" ");
		    
		for(k=1; k<=i; k++)
			printf("*");
		printf("\n");
	}
}
