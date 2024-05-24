#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
   int x,n,i,k;
   printf("entrer la capacite du tableau\n");
   scanf("%d",&n);
   printf("entrer la valeur de x\n");
   scanf("%d",&x);
   for(i=0;i<n;i++){
    printf("T[%d]  =  ",i);
    scanf("%d",&T[i]);
    }
   k=0;
  for(i=0;i<n;i++){
    if(T[i]==x)
        k++;
    }
    printf("%d apartient  au tableau %d fois",x,k);



    return 0;
}
