#include <stdio.h>
int main()
{
  int marks[5][3], i, j, max;
  for(i=0;i<5;i++)
  {
      printf("Enter the marks obtained by student %d" ,i);
      for(j=0;j<3;j++)
      {
          printf("\n marks[%d][%d]= ", i, j);
          scanf("%d", &marks[i][j]);
      }
  }
      for(j=0;j<3;j++)
      {
          max= marks[0][j];
          for(i=0;i<5;i++)
          {
              if(marks[i][j]>max)
                max=marks[i][j];
          }
          printf("\n Highest marks obtained in the subject %d= %d", j, max);
      }
      return 0;
  }
