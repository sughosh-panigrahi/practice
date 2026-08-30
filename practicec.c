#include<stdio.h>
#include<string.h>
struct student{
int roll;
float cgpa;
char name[100];
};
int main(){
struct student s1;
s1.roll = 800;
s1.cgpa =9.4;
strcpy(s1.name,"Sughosh");

printf("student's roll number is :%d\n ",s1.roll);
printf("the studnet's cgpa is :%f\n",s1.cgpa);
printf("the studnet's name is :%s\n",s1.name);
struct student s2;
s2.roll = 801;
s2.cgpa =9.5;
strcpy(s2.name,"pranav");

printf("student's roll number is :%d\n ",s2.roll);
printf("the studnet's cgpa is :%f\n",s2.cgpa);
printf("the studnet's name is :%s\n",s2.name);

struct student s3;
s3.roll =802;
s3.cgpa =9.3;
strcpy(s3.name,"shreyas");
printf("student's roll number is:%d\n",s3.roll);
printf("the student's cgpa is :%f",s3.cgpa);
printf("the student's name is :%s",s3.name);

return 0;
}


