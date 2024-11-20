//Transpose of 2D Array//
#include <stdio.h>
int main()
 {
    int a[20][20], transposed[20][20];
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    printf("Enter the elements:-\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
         {
            printf("transposed[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

   
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposed[j][i] = a[i][j];
        }
    }

    
    printf("The transposed matrix is:\n");
    for (int i = 0; i < cols; i++)
     {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}