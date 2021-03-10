// C program to find the length of string
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
	char Str[1000];
	int i,len;
	int nchar = 0;

	printf("Enter the String: ");
	gets(Str);

	for (i = 0; Str[i] != '\0'; ++i);

	printf("\nLength of Str including spaces is %d\n", i);

    len=i;

    for(int j = 0; j!= len; j++)
     {
        if(Str[j]!= ' ')
           nchar++;
     }

     printf("length of string excluding spaces= %d\n", nchar);


     getch();
}
