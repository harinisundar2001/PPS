#include<stdio.h>
int main ()
{
    int mat[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n enter the elements of the matrix : %d , %d ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    //Print the matrix output
     printf("\nThe entered matrix\n");
        for(i=0;i<2;i++)
        {
            printf("\n");
            for(j=0;j<2;j++)
            {
                printf("%d\t",mat[i][j]);
            }
      
        }
  
  //Now double the diag elements
  mat[0][0]= mat[0][0]*2;
  mat[1][1]= mat[1][1]*2;
  printf("\nThe doubed matrix\n");
        for(i=0;i<2;i++)
        {
            printf("\n");
            for(j=0;j<2;j++)
            {
                printf("%d\t",mat[i][j]);
            }
      
        }
  
  
  return 0;
}
