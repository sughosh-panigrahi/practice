#include<stdio.h>
int countvowels(char str[]);
int main(){
char str[]="MY DREAM NYC";
printf("the number of vowels are:%d\n",countvowels(str));
return 0;
}
int countvowels(char str[]){
int count=0;
for(int i=0;str[i]='\0';i++){
if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]== 'U'){
count++;
}
}
return count;
}


