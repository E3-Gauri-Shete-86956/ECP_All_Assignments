#include<stdio.h>
int main()
{ 
  int choice,n1,n2,ans;
  enum function{exit,add,sub,mul,div};
  enum function cal;
  do
  { 
    printf("Enter the n1 number: ");
	scanf("%d",&n1);

	printf("Enter the n2 number: ");
	scanf("%d",&n2);

    printf("0.exit\n");
    printf("1.addition\n");
	printf("2.subtract\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("Enter the choice\n");
    scanf("%d",&choice);
	switch(choice)
	{
	  case exit:printf("Exit Successfully!!\n");
	            break;
      case add:ans=n1+n2;
	            printf("Addition : %d\n",ans);
                break;
      case sub:ans=n1-n2;
	            printf("Subtraction : %d\n",ans);
                break;
      case mul:ans=n1*n2;
	            printf("Multiplication: %d\n",ans);
                break;
      case div:  if(n2!=0)
				 {
		       		 ans=n1/n2;
                     printf("Division: %d\n",ans);
				 }
				 else
				   printf("Please enter valid n2 number!!\n");
                break;
      default:printf("Please enter correct choice!!\n");
                break;

	}
  }while(choice!=0);
  return 0;
}
