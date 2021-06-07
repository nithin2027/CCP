#include <stdio.h>
#include <conio.h>
int main()
{

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i=0; i<=100; i++)
        {
	if (i%num == 0) {
	    printf("%d divides %d\n", num, i);
	    }
    }
    return 0;
    getch();
}
