#include <stdio.h>
main()
{
	int num1,num2;
	float result;
	char ch;  
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Choice operation to perform (+,-,*,/): ");
	scanf(" %c",&ch);
	result=0;
	switch(ch)    
	{
		case '+':
		result=num1+num2;
		break;
		case  '-':
		result=num1-num2;
		break;
		case  '*':
		result=num1*num2;
		break;
		case  '/':
		result=(float)num1/(float)num2;
		break;
		default:
		printf("Invalid operation.\n");
		break;
	}
		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);

}
