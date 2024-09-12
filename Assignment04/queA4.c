#include<stdio.h>
int error_flag=0;
void fun_add(int a, int b);
void fun_sub(int a, int b);
void fun_mul(int a, int b);
void fun_div(int a, int b);
int main()
{
 int n1,n2;
 enum cal{EXIT,ADD,SUB,MUL,DIV}ch;

 printf("Enter the numubers:\n");
 scanf("%d%d\n",&n1,&n2);

 printf("0.EXIT\n 2.ADD\n 3.SUB\n 4.MUL\n 5.DIV\n");
 printf("Enter the choice:");
 scanf("%d",(int*)&ch);

 switch(ch)
 {
  case ADD :fun_add(n1,n2);
	    break;
  case SUB :fun_sub(n1,n2);
	    break;
  case MUL :fun_mul(n1,n2);
	    break;
  case DIV :fun_div(n1,n2);
	    if(error_flag==1)
	    {
	     printf("Error occured :Division by zero\n");

	     error_flag=0;
	    }
            break;	     
  case EXIT : return 0;
  default: printf("Invalid choice\n");
 }
return 0;
}

void fun_add(int a,int b)
{
 printf("Add=%d\n",a+b);
}
void fun_sub(int a,int b)
{
 printf("Sub=%d\n",a-b);
}
void fun_mul(int a,int b)
{
 printf("Mul=%d\n",a*b);
}
void fun_div(int a,int b)
{
if(b==0)
 {
 error_flag=1;
 }
 else
 {
 printf("div=%d\n",a/b);
 }
}
