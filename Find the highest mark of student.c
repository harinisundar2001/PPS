#include<stdio.h>
int
main ()
{
  int mark[5];
  int i, highest = 0;
  int rollno;
  for (i = 0; i < 5; i++)
    {
      printf ("\n Enter the mark of roll number : %d = ", i + 1);
      scanf ("%d", &mark[i]);
      if (mark[i] > highest)
	    {
	        highest = mark[i];
	        rollno = i;
	    }
    }
  printf("\n The highest mark scored by roll number %d :  And the mark is: %d  ",rollno + 1, highest);
}
