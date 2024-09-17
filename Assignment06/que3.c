#include<stdio.h>
#include<string.h>

int main(void)
{
   char str1[20];
   char str2[20];

   printf("Enter string 1 :");
   scanf("%s",str1);

   printf("Enter string 2 :");
   scanf("%s",str2);

   printf("Before strcat : str1 = %s, str2 = %s\n",str1,str2);

   strcat(str1,str2);

   printf("After strcat : str1 = %s, str2 = %s\n",str1,str2);


   return 0;
}
