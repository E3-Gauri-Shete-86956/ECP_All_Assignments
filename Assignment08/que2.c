#include<stdio.h>
typedef struct student
{
int rollno;
char name[20];
float marks;

}stud_t;

void accept_info(const stud_t *s);
void print_info(const stud_t*s);

int main()
{
 stud_t s;
accept_info(&s);
print_info(&s);
return 0;
}

void accept_info(const stud_t*s)
{
 printf("Enter the student information(Roll no,Name,Marks):");
 scanf("%d%s%f",&s->rollno,s->name,&s->marks);
}

void print_info(const stud_t*s)
{

 printf("Roll no=%d\n",s->rollno);
 printf("Name=%s\n",s->name);
 printf("Marks=%f\n",s->marks);
}


