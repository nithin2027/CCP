#include<stdio.h>
void main()
{
	int a[100], min, max;
	int n, i, temp1=0, temp2 = 0, pos1 = 0, pos2 = 0;
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	printf("\nEnter the elements:");
	for (i = 0; i<n; i++)
	{
	    scanf("%d", &a[i]);
		if (i==0)
		{
			min=max=a[i];
		}
		if (a[i]<min)
			min=a[i];
		else if (a[i]>max)
			max=a[i];
	}
	printf("\nLargest element is %d and Smallest element is %d\n ", max, min);
	for (i=0; i<n; i++)
	{
		if (min==a[i])
		{
			pos1=i;
			break;
		}
	}
	for (i = 0; i<n; i++)
	{
		if (max==a[i])
		{
			pos2=i;
			break;
		}
	}
	temp1=a[pos1];
	temp2=a[pos2];
	a[pos1]=temp2;
	a[pos2]=temp1;
	printf("\nArray after interchanging of smallest and largest : \n");
	for (i=0; i<n; i++)
	{
		  printf("\nElement : %d", a[i]);
	}
	}
