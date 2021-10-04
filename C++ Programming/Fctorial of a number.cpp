#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, i, fact=1;
	printf("Enter the number = ");
	scanf("%d", &a);
	if (a<0)
	{
    printf("Factorial of negative numbers does not exist");
    }
    else
	for (i=1; i<=a; i++)
	fact*=i;
    {
    printf("Factorial of the number %d ", &a, "is %d", &fact);
    }
	return 0;
}
