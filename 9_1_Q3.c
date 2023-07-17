#include<stdio.h>

void main(){
int o,p;

printf(" • type any size of string :- ");
scanf("%d",&p);

char NAME[p];

printf(" • enter a string :- ");
scanf("%s",&NAME);

for(o=0;o<=p;o++);

    {
        if(NAME[o]>=65 && NAME[o]<=90)
            {
                NAME[o]=NAME[o]+32;
            }
        else if (NAME[o]>=97 && NAME[o]<=122)
            {
            NAME[o]=NAME[o]-32;        
            }
    }
    
    printf(" • toggel case :- %S",NAME);
    
}