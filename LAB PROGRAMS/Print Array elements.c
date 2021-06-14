#include<stdio.h>
int main()
{
    int a[1000],i,size;

     printf("Enter size of array: ");
     scanf("%d",&size);

    printf("Enter %d elements in the array : ", size);
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for(i=0;i<size;i++)

    {
        printf("%d  ", a[i]);
    }

    return 0;
}
