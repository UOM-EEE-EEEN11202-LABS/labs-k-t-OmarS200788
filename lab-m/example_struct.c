#include <stdio.h> 
#include <math.h>
#define MODEL_LEN 25

int main(void) {


struct part {
  int number;
  char model[MODEL_LEN+1];
  int bay_location;
};

struct part hammer ={0, "Ultra 5001", 1};
struct part spanner = {0, "Megaspan 2000",2};

struct name_of_my_struct_type {
  int c;
  int i;
};

struct name_of_my_struct_type s;
struct part sheets = {4,5};

printf("sizeof structure s = %d\n", sizeof(s) );

struct my_complex {
  double real, imaginary;
} c1 = {1.0, 1.0}, c2 = {1.0, 0.0}, c3;  // this initializes c1 and c2, c3 is declared but empty
 
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
printf("c3 = %.2f + %.2fi\n", c3.real, c3.imaginary);

double c4;
c4 = sqrt((c3.real)*(c3.real) + (c3.imaginary)*(c3.imaginary));
printf("The absolute value of c3 is %.4g\n",c4);

return 0;
}