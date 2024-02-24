#include<stdio.h>
int main ()
{
    int n,s;
    do
    {
        printf("entrez une valeur\n");
        scanf("%d",&n);
        if (n %2==0 && n>0)
        {
           printf("vous avez le nombre %d qui est une valeur positive et paire voulez vous recommencez?si oui entrez 0 \n",n);
           scanf("%d",&s);
        }
        else if (n%2==0 && n<0)
        {
           printf("vous avez le nombre %d qui est une valeur negative et paire voulez vous recommencez?si oui entrez 0 \n",n);
           scanf("%d",&s);
        }
        else if (n%2!=0 && n>0)
        {
           printf("vous avez le nombre %d qui est une valeur positive et impaire voulez vous recommencez?si oui entrez 0 \n",n);
           scanf("%d",&s);
        }
        else
         {
           printf("vous avez le nombre %d qui est une valeur negative et impaire voulez vous recommencez?si oui entrez 0 \n",n);
           scanf("%d",&s);
        }
        
        
        
    } while (s==0);
    
    
}