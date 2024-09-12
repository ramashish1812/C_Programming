//swap two values without using third variable (use + and -)
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	printf("\nvalue of a before swapping = %d",a);
	printf("\nvalue of b before swapping = %d",b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nvalue of a after swapping = %d",a);
	printf("\nvalue of a after swapping = %d",b);
	
	
	return 0;
}
