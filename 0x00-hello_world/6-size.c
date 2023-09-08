#include<stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 *
 * This function prints the sizes of various data types on the computer.
 *
 * Return: 0 if success.
 */
int main(void)
{

printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
