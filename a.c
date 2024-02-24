#include<stdio.h>
int main ()
{
    int j,i,s=0,t;
    for ( i = 1; i <=4; i++)
    {
       printf("%d",i);
       printf("\n");
      s=i*i;
      for ( j = 1; j <=s; j++)
      {
        if (j%i==0)
        {
           printf("%d",j);
        }
        
      }
      printf("\n");
    }
    
}