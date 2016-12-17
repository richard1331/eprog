#include<stdio.h>
#include<math.h>

int main()
{

	float a, b;
  
	printf("Enter the value in degree Fahrenheit:\n");
	scanf ("%f", &a);
	b = (a-32)*5/9;
	printf("The value in degree Celsius is %.2f",b);

}
