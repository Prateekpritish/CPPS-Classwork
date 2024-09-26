// Pritish  sarkar
//program :write a c function to Interchange  rows and columns of a matrix support upto 20 x 20 order . 

#include<stdio.h>

 interchange();

int first_arr[20][20] , sec_arr[20][20], row,col,i,j ;

main()
{
    extern int first_arr[20][20] , row,col,i,j ;

    printf("Enter the order of the matrix:");

    scanf("%d %d",&row,&col);

    printf("Enter the value of the matrix:\n");

    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&first_arr[i][j]);
            }
        }
    
    printf("The original matrix is :\n");

     for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d",first_arr[i][j]);
            }
            printf("\n");
        }

      interchange();

    printf("The matrix after interchanged is :\n");

    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
               printf("%d",sec_arr[i][j]);
            }
            printf("\n");
        }



}

interchange()
{
    extern int first_arr[20][20] , sec_arr[20][20], row,col,i,j ;

    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                sec_arr[j][i]= first_arr[i][j];
            }
            printf("\n");
        }
    
}