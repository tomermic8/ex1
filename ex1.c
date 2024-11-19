/******************
Name: Tomer Michels
ID: 322440892
Assignment: Ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.
int main() {
  // What bit
  //*Scan two integers (representing number and a position)
 //Print the bit in this position. */
  printf("What bit:\n");
  int num, position;
  printf("Please enter a number:\n ");
  scanf("%d", &num);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  int bit= (num>>position)&1; // doing and bitwise between num and the number one afer i mooved him till he will be at the same position as the position integer//
  printf("The bit in position %d of number %d is:%d\n",position,num, bit);

  // Set bit
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("\nSet bit:\n");
  printf("Please enter a number:\n ");
  scanf("%d", &num);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  int bit1on= (1<<position)|num; //doing or between num and 1 after i moved him to the position i want to change the number to 1, bit1on will return the same binar digits except the position, there he will return 1 always//
  int bit2off=(1<<position);//taking the binar number 1 to the position//
  bit2off=~bit2off;//replacing the 1 at the position to 0, everything else will be 1//
  bit2off=(bit2off&num);//doing and between numbers, will return the same binary digit in num except the position, when we will always return 0//
  printf("Number with bit %d set to 1: %d\n", position,bit1on);
  printf("Number with bit %d set to 0: %d\n", position,bit2off);

  // Toggle bit
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n ");
  scanf("%d", &num);
  printf("Please enter a position:\n ");
  scanf("%d", &position);
  int toggle = ( 1 << position ) ^ num;//1 after position will be 1 at posotion, else be 0, xor between 0 and num, will be always num, in position, xor with 1 and num, will return the opossite of num//
  printf("Number with bit %d toggled:%d\n", position,toggle);

  // Even - Odd
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n ");
  scanf("%d", &num);
  int opossitenum= ~num;//change the whole number cause i want the first binar digit,every even number ends with 0//
  opossitenum= opossitenum&1;//will return 0 at any position except the first one, if 1 will return 1, if 0 will return 0//
  printf("%d\n", opossitenum);

  // 3, 5, 7, 11
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("\n3, 5, 7, 11:\n");
  int octal1, octal2;
  printf("Please enter the first number (octal):\n ");
  scanf("%o", &octal1);
  printf("Please enter the second number (octal):\n ");
  scanf("%o", &octal2);
  int sum= octal1+octal2;
  printf("The sum in hexadecimal:%x\n",sum);
  int bit3= (1<<3)&sum; bit3=bit3>>3; //taking the third bite and isolate him at 0 postion with 0s left to him//
  int bit5= (1<<5)&sum; bit5=bit5>>5; //taking the fifth bite and isolate him at 0 postion with 0s left to him//
  int bit7= (1<<7)&sum; bit7=bit7>>7; //taking the seven bite and isolate him at 0 postion with 0s left to him//
  int bit11= (1<<11)&sum ;bit11=bit11>>11; //taking the eleven bite and isolate him at 0 postion with 0s left to him//
  printf("The 3,5,7,11 bits are: %d%d%d%d \n",bit3,bit5,bit7,bit11);

  printf("Bye!\n");
  
  return 0;
}
