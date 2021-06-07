#include <math.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    float a, b, c, discriminant, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant))/(2*a);
        r2 = (-b - sqrt(discriminant))/(2*a);
        printf("root1 = %f and root2 = %f", r1, r2);
    }
    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %f;", r1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant)/(2*a);
        printf("r1 = %f+%fi and r2 = %f-%fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
    getch();
}
