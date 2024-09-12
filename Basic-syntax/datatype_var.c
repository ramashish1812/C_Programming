//datatype_var
#include<stdio.h>
int main()
{
	int num1=10,num2=20,num3=30;
	long int ln1=45000,ln2=55000,ln3=65000;
	float f1=54.7,f2=85.65,f3=45.632;
	char ch1='@',ch2='A',ch3='4001';
	
	printf("integer data type :=");
	printf("\nvalue of num1 = %d",num1);
	printf("\nvalue of num2 = %d",num2);
	printf("\nvalue of num3 = %d",num3);
	
	printf("\nlong integer data type :=");
	printf("\nvalue of ln1 = %ld",ln1);
	printf("\nvalue of ln2 = %ld",ln2);
	printf("\nvalue of ln3 = %ld",ln3);

    printf("\nfloat data type :=");
    printf("\nvalue of f1 = %.2f",f1);
    printf("\nvalue of f2 = %.3f",f2);
    printf("\nvalue of f3 = %.1f",f3);
    
    printf("\ncharater data type :=");
    printf("\nvalue of ch1 = %c",ch1);
    printf("\nvalue of ch2 = %c",ch2);
    printf("\nvalue of ch3 = %c",ch3);

	return;
}
