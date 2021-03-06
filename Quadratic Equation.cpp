#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{

	int a, b, c; // The three int variables store the values of a, b and c

	float x1, x2; // The two float variables store the values of the roots

	/*The user is prompted to enter values of a, b and c and they are scanned in one at a time*/

	printf("Enter the value of the x^2 coefficient: ");
	scanf("%d", &a);

	printf("Enter the value of the x coefficient: ");
	scanf("%d", &b);

	printf("Enter the value of constant: ");
	scanf("%d", &c);

	/*The following 'if' statement will notify the user if the quadratic has no real roots*/

	if (((b*b) - (4 * a*c)) < 0)
	{
		printf("This quadratic has no real solutions");
	}

	/*If the quadratic has real roots then they are calculated and printed as floating points
	with three decimal places*/

	else
	{

		x1 = ((-b + sqrt((b*b) - (4 * a*c))) / (2 * a));

		x2 = ((-b - sqrt((b*b) - (4 * a*c))) / (2 * a));

		printf("\n\n");
		printf("The first root is %.3f", x1);
		printf("\n\n");
		printf("The second root is %.3f", x2);
		printf("\n\n");

	}

	return 0;

}