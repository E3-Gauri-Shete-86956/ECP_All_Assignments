#include<stdio.h>

int main()

{
 int n;
 int i;
 int res=1;
printf("Enter the number:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
 res=res*i;
 printf("%d!=%d\n",n,res);
}


}
