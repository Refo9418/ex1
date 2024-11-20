/******************
Name: Ofer 
ID: 329635072
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  //declare
  int num1,position1,thebit1;

  printf ("Please enter a number:\n");
  scanf ("%d",&num1);

  printf ("Please enter a position:\n");
  scanf ("%d",&position1);

  //first we move the wanted bit to the "0" psition, then by using the AND operation we zero all the other bits. so we are left only with the first bit.
  thebit1 = (num1 >> position1) & 1;

  printf ("The bit in position %d of number %d is: %d\n", position1, num1, thebit1);


  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  //declare
  int num2,position2,biton,bitof,trensform2;

  printf ("Please enter a number:\n");
  scanf ("%d",&num2);

  printf ("Please enter a position:\n");
  scanf ("%d",&position2);

  //we are making a number that all of his bits are zero unles the bit in the position that we are told
  trensform2 = 1 << position2;

  //the OR operation will make the position bit 1
  biton = num2 | trensform2;
  printf ("number with bit %d set to 1: %d\n",position2, biton);

  // the operation XOR will toggle the position bit to zero
  bitof = biton ^ trensform2;
  printf ("number with bit %d set to 0: %d\n",position2, bitof);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  //declare
  int num3,position3,trensform3;

  printf ("Please enter a number:\n");
  scanf ("%d",&num3);

  printf ("Please enter a position:\n");
  scanf ("%d",&position3);
  
  //we are making a number that all of his bits are zero unles the bit in the position that we are told
  trensform3 = 1 << position3;
  num3 = num3 ^ trensform3;

  printf ("Number with bit %d toggled: %d",position3,num3);



  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

   //declare
  int num4,odd_even;

  printf ("Please enter a number:\n");
  scanf ("%d",&num4);

  //first we use the NOT operation, so now we can chack if the number is even by the LSB bying one and odd by zero
  odd_even = (~num4) & 1;
  printf ("%d\n", odd_even);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  //declare
  int second_num_octa5,first_num_octa5,sum_hex;

  printf ("Please enter a number (octal) :\n");
  scanf ("%o",&first_num_octa5);

  printf ("Please enter a number (octal) :\n");
  scanf ("%o",&second_num_octa5);

  //sum
  sum_hex = first_num_octa5 + second_num_octa5;

  //print in hex
  printf ("The sum in hexadecimal: %X\n",sum_hex);

  //for each bit we print its value in order
  printf ("The 3,5,7,11 bits are: %d%d%d%d", (sum_hex >> 3) & 1,(sum_hex >> 5) & 1, (sum_hex >> 7) & 1, (sum_hex >> 11) & 1 );
  
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");

  printf("Bye!\n");
  
  return 0;
}
