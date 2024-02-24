#include<stdio.h>
int main ()
{
    int i,n,j,p,t,k=0;
    printf("entrez une valeur");
    scanf("%d",&n);
     for ( i = 1; i <= n; i++)
   {
     for ( j = 1; j <=i; j++)
    {
        printf("x");
     }
   printf("\n");
  }
    for ( p = n; p>=1; p--)
   {
       for (t=n; t>p; t--)
       {
        printf(" ");
       }
        for (  k= 1; k<=p; k++)
        {
            printf("o");
        }
        printf("\n");
       
   }
}
