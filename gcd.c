#include<stdio.h>
void main()
{
  int n1,n2,i,gcd;
  printf("enter two integer for which gcd has to  be found"):
  scanf("%d %d",&n1,&n2);
  for(i=o;i>=n1 && i>=n2;++i)
  {
    if(n1%i==0 && n2%i==0)
    {
     i=gcd;
     }
   }
   printf("%d",gcd);
  }
