/* Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
DeptNoDept NameDsgnCodeDesignation
10Marketing'M'Manager
20Management'S'Supervisor
30Sales's'Security Officer
40Designing'C'Clerk
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/

#include<stdio.h>
int main()
{
int emp_id;
int dept_no;
char dc;

printf("Enter the Employee id:\n");
scanf("%d",&emp_id);

printf("Enter the Department number:\n");
scanf("%d",&dept_no);
printf("Enter the Registration code:\n");
scanf("%c",&dc);



switch(dept_no)
{
 case 10: printf("Employee with Employee id:%d working in marketing department \n",emp_id);
	  break;
 case 20: printf("Employee with Employee id:%d working in management department\n ",emp_id);
	  break;
 case 30: printf("Employee with Employee id:%d working in sales  department\n",emp_id);
	  break;
 case 40: printf("Employee with Employee id:%d working in Designing department\n",emp_id);
	  break;
 default: printf("Invalid department\n");
	  break;
}
 switch(dc)
{
 case 'M':printf("as a manager /n");
	  break;
 case 'S':printf("as a supervisor\n");
	  break;
 case 's':printf("as a Security Officer\n");
	  break;
 case 'C':printf("as a Clerk\n");
	  break;
 default: printf("Invalid designtion code\n");
	  break;
}
return 0;
}

