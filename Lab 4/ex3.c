/* Example: matrices represented by 2-dimensional arrays */
#include <stdio.h>
/* 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
}
  */


main()
{

  int A[3][3], B[3][3], C[3][3];
  int x, y, a;
  int i, j, k;

  puts("Please enter the values for A[0..2][0..2], one row per line:");

  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      scanf(" %d", &a);
      A[x][y] = a;
    }
  }

  puts("Please enter the values for B[0..2][0..2], one row per line:");

  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      scanf(" %d", &a);
      B[x][y] = a;
    }
  }

  printf("A=\n");
  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      printf("%6d", A[x][y]);
    }
    puts("");
  }

  printf("B=\n");
  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      printf("%6d", B[x][y]);
    }
    puts("");
  }

  
  /* multiply C = A.B: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += B[i][k] * A[k][j];
    }
  
  printf("C=A.B=\n");
  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      printf("%6d", C[x][y]);
    }
    puts("");
  }

  /* multiply C = B.A: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
  
  printf("C=B.A=\n");
  for(y=0; y<3; y++){
    for(x=0; x<3; x++){
      printf("%6d", C[x][y]);
    }
    puts("");
  }
}       
