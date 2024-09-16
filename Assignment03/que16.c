#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num;
  int magicnumber;
  do
  {
    magicnumber = (rand() % 1000)+1;
	//if(num<1000);
	  //break;
  }while(magicnumber<1000);
  printf("\n%d",num);
  
  //for(;;)
  {
  }
 return 0;
}
