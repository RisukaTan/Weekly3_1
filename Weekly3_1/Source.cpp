#include<stdio.h>
int main() {
	float w, h, b;
	printf("  <<BODY MASS INDEX>>\n");
	printf("you hight is : ");
	scanf_s("%f", &h);
	printf("you weight is : ");
	scanf_s("%f", &w);
	h = h * h;
	b = w / h;
	if (b < 18.5) {
		printf("Underweight");
	}
	else if (18.5 <= b <= 24.9)
	{
		printf("Normal");//65010536
	}
	else if (25.0 <= b <= 29.9)
	{
		printf("Overweight");
	}
	else if (b >= 30)
	{
		printf("Obese");
	}
}