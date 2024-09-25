#include<stdio.h>
 main()
{   int frow,fcol,srow,scol;
    int fmat[frow][fcol],smat[srow][scol],omat[frow][scol];


    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &frow, &fcol);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &srow, &scol);


    printf("Enter elements of first 2-D matrix:\n");
    for (int i = 0; i < frow; i++) {
        for (int j = 0; j < fcol; j++) {
            scanf("%d", &fmat[i][j]);
        }
    }
    printf("Enter elements of second 2-D matrix:\n");
    for (int i = 0; i < srow; i++) {
        for (int j = 0; j < scol; j++) {
            scanf("%d", &smat[i][j]);
        }
    }
     for (int i = 0; i < frow; i++) {
        for (int j = 0; j < scol; j++) {
            omat[i][j] = 0;
        }
    }
    if(fcol!=srow)
    {
    printf("Matrix multiplication not possible.\n");
    }

    else{
        for (int i = 0; i < frow; i++)
        {
            for (int j = 0; j < scol; j++)  
            {
                for (int k = 0; k < fcol; k++) 
                {
                      omat[i][j] += fmat[i][k] * smat[k][j];
                }
            }
        }
    }
    printf("\n RESULT IS \n");
    for (int i = 0; i < frow; i++) {
        for (int j = 0; j < scol; j++) {
        printf("%d   ",omat[i][j]);
        }
        printf("\n");
    }

}
