#include <stdio.h>
/**
 * main - print granding system.
 *
 * Return: Always 0.
 */

int main(void)
{
	float n;
	n = (n >= 0 && n <= 100);
	printf("Enter n: ");
	scanf("%f", &n);
	char A;
	char B;
	char C;
	char D;
	char E;
	char F;

	if (n >= 80 && n <= 100)
	{
		printf("grade A\n");
	}
	else if (n >= 70 && n <= 79)
		{
			printf("B\n");
		}
		else if (n >= 60 && n <= 69)
			{
				printf("C\n");
			}
			else if (n >= 50 && n <= 59)
			{
					printf("D\n");
			}
			else if (n >= 45 && n <= 49)
			{
						printf("E\n");
			}
			else if (n >= 0 && n <= 44)
			{
							printf("F\n");
			return (0);
			}
}
