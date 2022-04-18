#include<stdio.h>
int main()
{int i,f=1,n;
  printf("what factorial do you want:");
  scanf("%d",&n);
  for(i<1;i<=n;i++)
  f=f*i;
  if(n>10)
  printf("too big a number");
  else if(n<0)
  printf("negative number");
  printf("factorial is %d",f);
  return 0;}