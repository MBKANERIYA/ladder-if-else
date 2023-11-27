#include<stdio.h>

main()
{
	int a;
	
	printf("\n\nEnter value of A = ");
	scanf("%d",&a);
	
	if(a<0){
		printf("Value of A is negative");
	}
	else if(a==0){
		printf("Value of A is neutral");
	}
	else if(a>0){
		printf("Value of A is positive");
	}
}
