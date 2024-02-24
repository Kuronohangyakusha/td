#include<stdio.h>
int main(){
    int i,max=0,s=0,n,m;

    printf("combien de valeur souhaitez vous saisir?");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
       printf("donnez une valeur?");
       scanf("%d",&m);
       if (m>max)
       {
        max=m;
        s=i+1;
       }
       
    }
     printf("la plus grende valeur est %d a la position %d",max,s);
    
    
}