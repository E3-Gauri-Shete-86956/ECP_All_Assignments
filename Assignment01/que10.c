#include<stdio.h>
#include<math.h>
int main()
{
float perimeter,s,a,b,c,area;

printf(" length of the three sides of the triangle:");
scanf("%f%f%f",&a,&b,&c);

perimeter=a+b+c;
s=a+b+c/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("perimeter of triangle:\n=%.2f",perimeter);
printf("s\n=%f.f",s);
printf("area of triangle:\n=%.2f",area);

return 0;
}
