#include <stdio.h>

int main(void) {
  char my_email[] = "omar.shehadeh@student.manchester.ac.uk";
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  // Your code in this section
  while (n<0 || n>38){
    printf("Your response must be between 0 and 38.");
    scanf("%d", &n);
  }

  if (my_email[n]=='a'|| my_email[n] == 'e' || my_email[n] == 'i' || my_email[n] == 'o' || my_email[n] == 'u') {
    printf("Yes!");
  }
  else{ 
      printf("No!"); }


  printf("Yes!"); // place as needed in the code. You can use more than once.
  printf("No!"); // place as needed in the code. You can use more than once.
  printf("Error"); // place as needed in the code. You can use more than once.

  // Do not edit below here
  return 0;
  }