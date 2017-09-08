#include <stdio.h>

/*

Write a program to get a number from the user and print the 
reverse of it.

Note - Do not Use Arrays. Use only (+,-,*./,%) operators.

*/

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d\n", rev(num));
}

int rev ( int num )
{
	int rev = 0;

	while(num > 0 )
	{
		rev = (rev * 10 ) + (num % 10);
		num = num / 10;
	}
	return rev;
}
