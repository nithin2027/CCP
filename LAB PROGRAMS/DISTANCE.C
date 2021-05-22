#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
float x1,x2,y1,y2,dist;
printf("Enter x1,x2= ");
scanf("%f,%f", &x1,&x2);
printf("Enter y1,y2= ");
scanf("%f,%f", &y1,&y2);
dist=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
printf("Distance between two points are= %f",dist);
getch();
}