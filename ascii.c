#include<stdio.h>
int main()
{
    int d;
    char ch;
    clrscr();
    printf("\n Enter a character : ");
    scanf("%c",&ch);
    d=ch;
    printf("\n The ASCII value of the character is : %d",d);
    getch();
    return 0;
}
