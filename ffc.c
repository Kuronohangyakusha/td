#include<stdio.h>
    int main ()
{
  int t[10][10],tab[10][10],table[10][10];
  int n,m,i,j,k;
  printf("entrez le nombre de ligne et de colonnes:\n");
  scanf("%d%d",&n,&m);

  printf("remplissons la premiere matrice\n");
  for ( i = 0; i <n; i++)
  {
    for ( j = 0; j < m; j++)
    {
       scanf("%d",&t[i][j]);
    }
    
  }
  printf("remplissons le second tableau");
   for ( i = 0; i <n; i++)
  {
    for ( j = 0; j < m; j++)
    {
       scanf("%d",&tab[i][j]);
    }
    
  }
  printf("la multiplication des deux matrice est:\n");
  for ( i = 0; i <n; i++)
  {
    for ( j = 0; j < m; j++)
    {
       table[i][j]=0;
       for ( k = 0; k < m; k++)
       {
        table[i][j]+=t[i][k]*tab[k][j];
       }
       
    }
    
  }
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < m; j++)
    {
       printf("%d\t",table[i][j]);
    }
    printf("\n");
  }
  
  
}
