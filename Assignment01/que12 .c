#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
 printf("size=%lu,%%c, %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
 printf("size=%lu,%%c, 0 to %d\n",sizeof(unsigned char),UCHAR_MAX);
 printf("size=%lu,%%hd, %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
 printf("size=%lu,%%hu, 0 to %u\n",sizeof(unsigned short int),USHRT_MAX);
 printf("size=%lu,%%d, %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
 printf("size=%lu,%%u, 0 to %u\n",sizeof(unsigned int),UINT_MAX);
 printf("size=%lu,%%ld, %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
 printf("size=%lu,%%lu,0 to %lu\n",sizeof(unsigned long int ),ULONG_MAX);
 printf("size=%lu,%%f, %eto %e\n",sizeof(float ),FLT_MIN,FLT_MAX);
 printf("size=%lu,%%lf, %eto %e\n",sizeof(double),DBL_MIN,DBL_MAX);
 printf("size=%lu,%%Lf, %Le to %Le\n",sizeof(long double),LDBL_MIN,LDBL_MAX);

 return 0;
}
