#include <stdio.h>
void copy_string(char [], char []);

int main()
{
  char s[1000], d[1000];

  printf("Input source string\n");
  gets(s);

  copy_string(d, s);
  printf("The copied string: %s\n", d);


  getch();
}

void copy_string(char d[], char s[]) {
  int c = 0;

  while (s[c] != '\0') {
    d[c] = s[c];
    c++;
  }
  d[c] = '\0';
}
