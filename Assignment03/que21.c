#include<stdio.h>
int main()
{
  int n,num,flag,count=0;
  printf("Enter the starting prime number: ");
  scanf("%d",&n);

  for(num=n;;num++)
  {     
        flag=0;
  		for(int i=2;i<=num/2;i++)
  		{	
    		if(num%i==0)
			{	
	  			flag=1;
      			break;
			}
  		}
  		if(flag==0)
		{
    	  printf("%d\t",num);
		  count++;
		  if(count==5)
		    break;
		}
  }
  printf("\n");
 return 0;
}
