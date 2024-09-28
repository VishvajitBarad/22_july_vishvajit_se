//WAP Find out length of string without using inbuilt function 


#include<stdio.h>
main()
{
	char a[10];
	int i;
	printf("Enter string :");
	gets(a);
	do
	{
		i++;
	}
	while(a[i]!='\0');
		printf("string lenght : %d\n",i);
		
}
