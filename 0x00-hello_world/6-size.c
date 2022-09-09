#include <stdio.h>

/**
*main - print the string that is in the put function
*
*Description: using the main function
*this prints the program
*Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
