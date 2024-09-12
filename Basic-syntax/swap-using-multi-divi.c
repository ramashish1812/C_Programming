//swap-using-multi-divi
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	printf("\nvalue of a befor swapping = %d",a);
	printf("\nvalue of b befor swapping = %d",b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\nvalue of a after swapping = %d",a);
	printf("\nvalue of b after swapping = %d",b);
	
	return 0;
}
