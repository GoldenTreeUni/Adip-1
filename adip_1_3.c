#include <stdio.h>
int main(){
int n,i;
printf("Gebe eine Zahl ein");
scanf("%d",&n);
if (n<0){
printf ("fehlermeldung");
return 0;
}
for (i=2; i<=n-1; i++)
if(n%i==0)
break;
if(i==n)
printf ("Ja %d ist eine Primzahl",n);
else 
printf("Nein %d ist keine Primzahl",n);
    

}