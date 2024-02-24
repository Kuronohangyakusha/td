#include<stdio.h>
int main()
{
    char n;
    int t;
   printf("entrez un caractere");
   scanf("%c",&n);
    printf("le code asci de %c est %d\n",n,n);
    printf("son predecesseur est %c et son successeur est %c\n",n-1,n+1);
   printf("entrez une une valeur entiere\n");
    scanf("%d",&t);
   printf("le code asci %c",t);
    printf("son predecesseur est %c et son successeur est %c\n",t-1,t+1);

}