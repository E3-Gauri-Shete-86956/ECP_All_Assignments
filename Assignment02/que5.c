#include<stdio.h>
                         //using if else condition
/*int main()
{
        int n1,n2,n3;
        int max;
        printf("Enter the value of n1:");
        scanf("%d",&n1);
        printf("Enter the value of n2:");
        scanf("%d",&n2);
	printf("Enter the value of n3:");
        scanf("%d",&n3);

        if(n1>n2)
        {
         if(n1>n3)
	 {
	  printf("n1 is maximum\n");
	 } 
	 else
	 {
	  printf("n2 is maximum\n");
	 }
	 else if(n2>n3)
	 {
	  printf("n2 is maximum\n");
	 }
	 else
	 {
	   printf("n3 is maximum\n");
	 }
	}

        max=(n1>n2)?(n1>n3? n1:n3):(n2>n3 ? n2:n3);
        printf("max=%d",max );

        return 0;
}
*/

//using conditional operator

 int main()
{
 int n1,n2,n3;
        int max;
        printf("Enter the value of n1:");
        scanf("%d",&n1);
        printf("Enter the value of n2:");
        scanf("%d",&n2);
        printf("Enter the value of n3:");
        scanf("%d",&n3);
        
	max=(n1>n2)?(n1>n3? n1:n3):(n2>n3 ? n2:n3);
        printf("max=%d",max );


}
