#include<stdio.h>
 int divise (int a, int b){
    int s=0;
    if ( b%a==0)
    {
     s=1;
    }
    
   
    return s;
}
void ecriredivise(int m,int n){
    int d;
    d=divise(m,n);
    if (d==1)
    {
     printf("%d divise %d\n",n,m);
    }
    else{
       printf("%d ne divise pas %d\n",n,m);
    }
}
int nbdiv(int n){
    int l=0, i,o=0;
    for ( i = 1; i <=n; i++)
    {
        o=divise(i,n);
      if (o==1)
      {
        l++;
      }
      
    }
    return l;
    
}
void premier(int n){
    int f;
    

     f=nbdiv(n);
      if(f==2)
    {
       printf("vrai\n");
    }
    else
    {
       printf("faux\n");
    }
    
}
int main(){
    int p,n,m,c,j;
    printf("entrez deux valeurs\n");
    scanf("%d%d",&n,&m);
    p=divise(n,m);
    printf("le resultat est %d\n",p);
    ecriredivise(n,m);
    printf("entrez une valeure\n");
    scanf("%d",&c);
    j=nbdiv(c);
    printf("le nombre de diviseur est %d\n",j);
    premier(c);
}