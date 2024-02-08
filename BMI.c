// BMI calculate h in metter w in kg
#include<stdio.h>
int main()
{
	float h,w,bmi;
	printf("enter the value of weight in kg\n");
	scanf("%f",&w);
	printf("enter the value of height in metter\n");
	scanf("%2f",&h);
	bmi=w/(h*h);
	printf(" bmi is .%2f\n",bmi);
	if(bmi<15.0)
	{
		printf("starvation");
	}
	else if(bmi>=15.1 && bmi<=17.5)
	{
		printf("Anorexia ");
	}
	else if(bmi>=17.5 && bmi<=18.6)
	{
		printf(" underweight");
	}
	else if (bmi>=18.6 && bmi<=24.9)
	{
		printf(" ideal");
	}
	else if (bmi>=25.0 && bmi<=25.9)
	{
		printf(" overweight");
	}
	else if(bmi>=30 && bmi<=30.9)
	{
		printf("obsese");
	}
	else if(bmi>=40)
	{
		printf("morbidy obsese");
	}
}

