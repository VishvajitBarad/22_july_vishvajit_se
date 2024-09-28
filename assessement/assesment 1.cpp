
//Assessment 1

#include<stdio.h>
main()
 {
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j, k;

    printf("Enter elements for 2x2 matrix 1:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for 2x2 matrix 2:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            result[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            for (k = 0; k < 2; k++) 
			{
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

}
