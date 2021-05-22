#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("Enter 3 numbers= ");
scanf("%d,%d,%d", &n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("%d is the largest",n1);
else if(n2>=n1 && n2>=n3)
printf("%d is the largest",n2);
else
printf("%d is the largest",n3);
getch();
}