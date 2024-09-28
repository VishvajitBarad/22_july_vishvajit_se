//WAP to find reverse of string using recursion

#include<stdio.h>
main()
{
	char r[10];
	char v[10];
	int i=0,n=0,j=0;
	printf("Enter r your string : ");
	gets(r);
	while(r[i]!='\0')
	{
		i++;
		n++;
	}
	printf("string lenght : %d",i);
	printf("\nNEW: %s",r);
	for(int j=0;j<i;j++)
	{
		v[n]=r[j];
		n--;	
	}
	printf("\nreverse string is : %s",v);
	
}
