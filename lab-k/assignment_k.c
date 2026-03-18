#include <stdio.h>
#include <math.h>
//declaring variables
int main(void) {
  double height = 0;
  double volume;
  double radius = 2.2;
  char email[] = "omar.shehadeh@student.manchester.ac.uk";
  
  printf("Enter height: ");
  scanf("%lf", &height);

  // Your code in this section
  //height 
  if (height < 0){
    printf("Error");
    return 1 ;
  }
  //calculation
  volume = height * M_PI * radius*radius;


  // Do not edit below here
  printf("%s\n", email);
  printf("Volume: %.2f\n", volume);
  return 0;
}