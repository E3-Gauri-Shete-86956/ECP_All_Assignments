/*Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above
*/

#include<stdio.h>
int main()
{
 char c;
 printf("Enter the character ch:");
 scanf("%c",&c);

 if((c>=65 && c<=90) || (c>=97 &&c<=122)) 
 {
	 printf("ALPHABATE: c is a letter");
   
  if(c>=65 && c<=90)
    printf("UPPERCASE: c is an uppercase letter");

 else if(c>=97 && c<=122)
 printf("LOWERCASE: c is an lowercase letter");
 }
 else if(c>=48 && c<= 57)
   printf("DIGIT: c is a digit");
 
 else if(c==32,9,13,19)
  printf("SPACE: c is a space,tap,carriage return,new line");

 else
	 printf("OTHER:not listed above");


 return 0;
}
