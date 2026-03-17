// Name goes here
//
// Aim
// Calculate the smallest number of pound notes / coins needed
// ----------------------------------------------------------------------------

#include <stdio.h>

int main(void) {
  // Define variables
  int starting_amount = 93; // example total amount in pounds
  int num_fifties, num_twenties, num_tens, num_fives, num_ones;

  // Your code below here
  num_fifties = starting_amount/50;
  starting_amount = starting_amount - num_fifties*50;
  num_twenties = starting_amount/20;
  starting_amount = starting_amount - num_twenties*20;
  num_tens = starting_amount/10;
  starting_amount = starting_amount-num_tens *10;
  num_fives = starting_amount/5;
  starting_amount = starting_amount - num_fives * 5;
  num_ones = starting_amount;
  starting_amount = num_fives*5 + num_twenties*20 + num_fifties*50+num_tens*10 + starting_amount;



  // Display results
  printf("Starting amount in pounds: %d\n", starting_amount);
  printf("50 pound notes: %d\n", num_fifties);
  printf("20 pound notes: %d\n", num_twenties);
  printf("10 pound notes: %d\n", num_tens);
  printf("5 pound notes: %d\n", num_fives);
  printf("1 pound coins: %d\n", num_ones);
  return 0;
}
