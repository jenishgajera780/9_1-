#include<stdio.h>

int main(){

int a,u,i;

printf(" • type any size of string :- ");
scanf("%d",&u);
char name [u];

printf("\n • type any string :- ");
scanf("%s",&name);

for(i=0;i<=u;i++){
    if(name[i]>=65 && name[i]<=90)
    name[i]=name[i]+32;
}
printf("\n • lower case string : %s",name);
return 0;
}