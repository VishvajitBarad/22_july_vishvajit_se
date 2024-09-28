//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)  

#include<stdio.h>
main()
{
	int j,v;
	char choose;
	printf("Enter a value of j :");
	scanf("%d",&j);
	printf("\nEnter a value of v :");
	scanf("%d",&v);
	printf("\nEnter any operator (+,-,*,/,%%) :");
	scanf(" %c",&choose);
	
	switch(choose)
	{
		case '+':
		printf("\nadd:%d",j+v);
		break;
		
		case '-':
		printf("\nsub:%d",j-v);
		break;
		
		case '*':
		printf("\nmul:%d",j*v);
		break;
		
		case '/':
		printf("\ndiv:%d",j/v);
		break;
		
		default:
		printf("\nError!plz Enter a valid choice");
	}
}
