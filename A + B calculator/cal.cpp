
#include<stdio.h>
int main()
{
	double  A, B, ANSWER ;
	printf("first input : ");
	scanf_s("%lf", &A);
	printf("second input :");
	scanf_s("%lf", &B);
	ANSWER = A + B;
	printf("your answer is : %lf",ANSWER);
}