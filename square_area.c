#include <stdio.h>

int main()
{
	/*Variable*/
	double length_of_one_arm;
  
	/*Input*/
	printf("Enter the length of one arm: ");
	scanf("%lf", &length_of_one_arm);
	
	/*Area*/
	double square_area = length_of_one_arm * length_of_one_arm;
	
	/*Display*/
	printf("the length of one arm is %0.3lf.\n", square_area);

	return 0;		
}
