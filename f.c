#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=4; i++)
    
    {
        printf("%d",i);
        printf("\n");
        for ( j = 1; j <=i; j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
    
}