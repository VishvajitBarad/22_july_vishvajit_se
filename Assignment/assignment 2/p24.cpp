//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice  

#include <stdio.h>
main()
{
    int v,x;
    printf("Enter number of elements :- ");
    scanf("%d", &v);
    
    int w[v],s[v];
    printf("Enter value of A : \n");
    for (int i=0;i<v;i++)
    {
        printf("Enter value :- ");
        scanf("%d", &w[i]);
    }
    printf("\nEnter value of B : \n");
    for (int i=0;i<v;i++)
    {
        printf("Enter value :- ");
        scanf("%d", &s[i]);
    }
    printf("\nFor Ascending order type: 1");
    printf("\nFor Decending order type: 2");
    printf("\nYour Choice :- ");
    scanf("%d", &x);

	// Ascending order
    if (x==1)
    {
        for (int i=0;i<v;i++)
        {
            for (int j=0;j<v;j++)
            {
                if (w[i]<w[j])
                {
                    w[i]=w[i]+w[j];
                    w[j]=w[i]-w[j];
                    w[i]=w[i]-w[j];
                }
            }
        }

        for (int i=0;i<v;i++)
        {
            for (int j=0;j<v;j++)
            {
                if (s[i]<s[j])
                {
                    s[i]=s[i]+s[j];
                    s[j]=s[i]-s[j];
                    s[i]=s[i]-s[j];
                }
            }
        }
		 printf("\nAfter sort A : ");
        for (int i=0;i<v;i++)
        {
            printf("%d ", w[i]);
        }
        printf("\nAfter sort B : ");
        for (int i=0;i<v;i++)
        {
            printf("%d ", s[i]);
        }
    }

    // Decending order
    else if (x==2)
    {
        for (int i=0;i<v;i++)
        {
            for (int j=0;j<v;j++)
            {
                if (w[i]>w[j])
                {
                    w[i]=w[i]+w[j];
                    w[j]=w[i]-w[j];
                    w[i]=w[i]-w[j];
                }
            }
        }
		for (int i=0;i<v;i++)
        {
            for (int j=0;j<v;j++)
            {
                if (s[i]>s[j])
                {
                    s[i]=s[i]+s[j];
                    s[j]=s[i]-s[j];
                    s[i]=s[i]-s[j];
                }
            }
        }

        printf("\nAfter sort A : ");
        for (int i=0;i<v;i++)
        {
            printf("%d ", w[i]);
        }
        printf("\nAfter sort B : ");
        for (int i=0;i<v;i++)
        {
            printf("%d ", s[i]);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}
