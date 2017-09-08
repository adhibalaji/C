#include <stdio.h>

/*

Write a Program to Print the largest eight digit prime number

*/

int main()
{
	int num;
	int count;
	int temp;

	for(num = 99999999;;num--)
	{
		count = 0;
		for(temp = 1;temp <= num; temp++)
		{
			if( num % temp == 0 )
				count++;
			if(count > 2)
				break;
			else
				continue;
		}
		if ( count == 2)
			break;
		else
			continue;
		
	}
	printf("%d\n", num);
}
