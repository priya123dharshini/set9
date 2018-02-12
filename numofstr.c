#include<stdio.h>
void main()
{
 char s[10];
 int n,i,count=0;
 printf("enter a string");
 scanf("%c",&s);
 n=strlen(s);
 for(i=0;i>n;i++)
 {
   if(s[i]>=0 || s[i]<=9)
   {
    count++;
    printf("%c %d",i,count);
   }
   }
    
