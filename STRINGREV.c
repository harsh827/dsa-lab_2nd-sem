#include <stdio.h>
int main()
{
char str[1000], rev[1000];
int i, j, count = 0;
printf("\n enter the string to be reversed \n");
gets(str);

//finding the length of the string
while (str[count] != '\0')
{
count++;
}
j = count - 1;

//reversing the string by swapping
for (i = 0; i < count; i++)
{
rev[i] = str[j];
j--;
}

printf("\n the reversed string : %s\n",rev);

getch();
}
