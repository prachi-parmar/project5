//Largest Element in 2D Array//
#include <stdio.h>

void main ()
{

int a[10][10], row , column ,i , j ;

printf (" the element of row :");
scanf("%d",&row );

printf (" the elemnet of column ");
scanf(" %d", &column);

for (i=0 ; i<row ; i++ )
{
    for (j=0 ; j<column ; j++)
    {
        printf("a[%d][%d]", i,j);
        scanf("%d",&a[i][j]);
    }
}
 int largest= a[0][0];

for (i=0 ; i<row ; i++ )
{
    for (j=0 ; j<column ; j++)
    {
        if (a[i][j]> largest)
        {
            largest = a[i][j];
        }
    }

}   printf(" the largest element is : %d", largest );

}
