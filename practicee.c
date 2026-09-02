#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("MYDN.txt","r");
int a;
fscanf(fptr,"%d",&a);
int b;
fscanf(fptr,"%d",&b);
fclose(fptr);
fptr = fopen("MYDN.txt","a");
fprintf(fptr,"%d",a+b);
fclose(fptr);
return 0;
}

