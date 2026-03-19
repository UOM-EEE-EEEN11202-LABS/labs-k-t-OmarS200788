#include <stdio.h>
int main(void) {
  int i;
  double x;
  i = 40;
  x = 839.21;
  printf("|%d|%d|%d|%3d|\n", i, i, i, i);
  printf("|%.5lf|%10.3e|%g|\n", x, x, x);

  char letter = 'a';
  char string[] = "My text goes here";
  printf("My letter was: %s\n", letter);
  printf("My string was: %s\n", string);

  char ch = 'a';
  putchar('c');


  return 0;
}
