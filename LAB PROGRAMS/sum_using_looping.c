#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,m;
printf("Enter a number:\n");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("Sum is =%d",sum);
return 0;
getch();
}
