#include<stdio.h>
#include<math.h>
int main(){
int num;
int original;
int remainder;
int digits;
int result =0;
printf("the number is :%d",num);
scanf("%d",&num);
original= num;
while(original!=0){
original/=10;
digits++;
}
original=num;
while(original!=0){
remainder = original% 10;
result=pow(remainder,digits);
}
if(num==result){
printf("the number is an armstrong number:");
}
else{
printf("the number is not an armstrong number:");
}
return 0;
}


