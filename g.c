#include<stdio.h>
int main()
{
    int n,i,j,l;
    for ( i = 1; i <=4; i++)
    {
        if (i==1)
        {
           printf("x  ! ");
           for ( j = 1; j<= 10; j++)
           {
            printf("%d",j);
           }
           
        }
        else if (i==2 || i==4)
        {
            for ( j = 1; j <= 12; j++)
            {
                printf("---");
            }
            
        }
        else
        {
            for (n = 1; n <=10; n++)
            {
                printf("%d ! ",n);
                for ( l = 1; l <=10; l++)
                {
                   printf("%d",n*1);
                }
                printf("\n");
            }
            
        }
        printf("\n");
    }
        return 0;
}