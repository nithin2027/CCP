#include<stdio.h>
#include<conio.h>
void main()
{
float fah,cel;
printf("Enter the temp in fahrenheit= ");
scanf("%f",&fah);
cel=(5.0/9)*(fah-32);
printf("%.2f fahreheit in celsius is %.2f C", fah, cel);
getch();
}