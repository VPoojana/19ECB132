#include<stdio.h>
int main()
{int i,j,a,b;
  int matrix[20][20];
  printf("how many rows do you want:");
  scanf("%d", &a);
  printf("how many columns do you want:");
  scanf("%d", &b);
  for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
      {printf("enter elements in [%d][%d]:",i,j);
        scanf("%d",&matrix[i][j]);}}
  for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
      {printf("%d\t",matrix[i][j]);}
  printf("\n");}
  return 0;
  }