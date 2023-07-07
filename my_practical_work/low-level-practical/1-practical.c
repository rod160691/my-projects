#include <stdio.h>
/**
 * main - solving an assignment
 * description - A progragram for computing a school granding system
 * 80 - 100 == A
 * 70 - 79  == B
 * 60 - 69  == C
 * 50 - 59  == D
 * 45 - 49  == E
 * BELOW 45 == F
 * Return: Always 0
 */

int main(void)
{
	float marks;

	printf("Enter marks: ");
	scanf("%f", &marks);

			if (marks >= 80 && marks <= 100)
			{
				printf("A\n");
			}
			else if (marks >= 70 && marks <= 79)
			{
				printf("B\n");
			}
			else if (marks >= 60 && marks <= 69)
			{
				printf("C\n");
			}
			else if (marks >= 50 && marks <= 59)
			{
				printf("D\n");
			}
			else if (marks >= 45 && marks <= 49)
			{
				printf("E\n");
			}
			else if (marks >= 0 && marks < 45)
			{
				printf("F\n");
			}
			else
			{
				printf("you entered an invalid marks\n");
			return (0);
			}
}
