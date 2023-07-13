#include<stdio.h>
int main()
{
	double firstInput, secondInput;
	double sum,multiply, division, subtraction;
	printf("Enter the first input");
	printf("\n");
	scanf("%lf", &firstInput);
	
	printf("Enter the secondInput");
	printf("\n");
	scanf("%lf" , &secondInput);
	
	sum=firstInput + secondInput;
	printf("sum=%lf",sum);
	
	multiply=firstInput * secondInput;
	printf("multiply=%lf" ,multiply);
	
	division=firstInput / secondInput;
	printf("division=%lf" ,division);
	
	subtraction=firstInput - secondInput;
	printf("subtraction=%lf" ,subtraction);
}
