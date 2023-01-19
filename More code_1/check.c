#include <stdio.h>


int main()
{
  int n, i, count=0;
  float per[n], pass;
  printf("enter the number of students :\n");
  scanf("%d", &n);
  printf("enter the percentage of students :\n");
  for(i=0;i<n;i++)
  {
    scanf("%f", &per[i]);
  }
  for(i=0;i<n;i++)
  {
    if(per[i]>100.0)
    {
      printf("ERROR! PERCENTAGE INPUT ONLY ACCEPTED.\n Wrong input of %d student ", (i+1));
      exit(1) ;
    }
  }
  for(i=0;i<n;i++)
  {
    if(per[i]>40.0)
    {
      count ++;
    }
  }
  pass = (count*100)/n;
  printf("percent of students passed is %f", pass);

  return 0;
}
