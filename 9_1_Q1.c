# include<stdio.h>

void main(){
int o,j;

printf("\n • type a any size :- ");
scanf("%d",&o);
char name [o];

printf("\n • type any sring :-");
scanf("%s",&name);

for(j=0;j<=o;j++)

   {
      
       if(name[j]>=97 && name[j]<=122)
       name[j]=name[j]-32;
       
   }
printf("\n • lower case string :- %s",name);
}