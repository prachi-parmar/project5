//Sum of Elements in Row & Column of 2D Array//
#include<stdio.h>
int main()
{
    int row,column,a[20][20],i,j,rn,cn,rs=0,cs=0;

      
    printf("Enter the number of rows:- ");
    scanf("%d", &row);
    printf("Enter the number of columns:-");
    scanf("%d", &column);
     
    

     printf("Enter the elements:-\n");

     for (int i = 0; i < row; i++)  
     {
        for (int j = 0; j < column; j++)
         {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
         }
     }

printf("Enter the row number :- ");
scanf("%d", &rn);

printf("elements of row %d:-",rn);

for(j=0;j<column;j++)
{
    printf("%d",a[rn][j]);
    if(j<column-1)
    {
        printf(", ");
    }
    rs+=a[rn][j];
}

printf("\nthe sum of row %d:- %d\n",rn,rs);

 printf("Enter the column number :- ");
 scanf("%d", &cn);

 printf("elements of column %d:-",cn);
 for(i=0;i<row;i++)
 {
    printf("%d",a[i][cn]);
    if(i<row-1)
    {
        printf(", ");
    }

    cs+=a[i][cn];

 }

 printf("\nthe sum of column %d:%d\n",cn,cs);
}