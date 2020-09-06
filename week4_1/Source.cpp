#include<stdio.h>
int main()
{
	long int sum = 1;
	int count = 1, fac;

	printf("Please enter number of factorial : ");
	scanf_s("%d",&fac);
	while (count <= fac)
	{
		sum = sum * count;
		count = count + 1;
	}
	printf("Result of %d! is %1d",fac,sum);

	return 0;
}