#include <stdio.h>

/*Calculation of simple interest*/

int main(void)

{
	int p,n;
	float r,si;
    printf("Enter the values of p,n,r");
    scanf("%d %d %f", &p,&p,&r);
	
	/*Formula for simple interesr*/
	si=p*r*n/100;
	
	printf("%f",si);
}
