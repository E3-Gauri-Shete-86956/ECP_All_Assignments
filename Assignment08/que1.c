#include<stdio.h>
typedef struct student

{
 int roll_no;
 char name[20];
 float marks;
}stud_t;

int main()
{

 stud_t s;
 printf("student information(Roll no,Name,Marks):");
 scanf("%d%s%f",&s.roll_no,s.name,&s.marks);

 printf("Roll No=%d\n",s.roll_no);
 printf("Name=%s\n",s.name);
 printf("Marks=%f\n",s.marks);

 return 0;
}
