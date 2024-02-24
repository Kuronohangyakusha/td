#include<stdio.h>
int main ()
{
    int n,m,p,q,i,j;
    printf("entrez le nombre de ligne du premier tableau\n");
    scanf("%d",&n);
    printf("entrez le nombre de colonne du second tableau\n");
    scanf("%d",&q);
   
    do
    {
       printf("entrez le nombre de ligne du second tableau\n");
       scanf("%d",&p);
       printf("entrez le nombre de colonne du premier tableau\n");
       scanf("%d",&m);
       
    } while (m!=p);
    int t[n][m];
    int tab[p][q];
    printf("remplissons le premier tableau\n");
    for ( i = 0; i <n ; i++)
    {
       for ( j = 0; j < m; j++)
       {
        printf("entrez le nombre %d\n",j);
         scanf("%d",&t[i][j]);
       }
       
    }
    printf("le premier tableau est :\n");
    for ( i = 0; i <n ; i++)
    {
       for ( j = 0; j < m; j++)
       {
        printf("%d",t[i][j]);
       }
        printf("\n");
    }
    printf("remplissons le second tableau\n");
    for ( i = 0; i <p ; i++)
    {
       for ( j = 0; j < q; j++)
       {
         printf("entrez le nombre %d\n",j);
         scanf("%d",&tab[i][j]);
       }
       
    }
    printf("le second tableau est :\n");
     for ( i = 0; i <p ; i++)
    {
       for ( j = 0; j < q; j++)
       {
         printf("%d",tab[i][j]);
       }
       printf("\n");
    }
   int table[p][q];
     for ( i = 0; i <p ; i++)
    {
       for ( j = 0; j < q; j++)
       {
        table[i][j]=0;
       }
    }

    
  
     
    printf("le resultat est:\n");
    for ( i = 0; i <p ; i++)
    {
       for ( j = 0; j < q; j++)
       {
         printf("%d",table[i][j]);
       }
        printf("\n");
    }
    
   


}