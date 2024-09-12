//scanf
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	float f1,f2,f3;
	char ch1,ch2,ch3;
	
	printf("enter the value of num1 = ");
	scanf("%d",&num1);
	printf("enter the value of num2 = ");
	scanf("%d",&num2);
	printf("enter the value of num3 = ");
	scanf("%d",&num3);
	
	printf("\ninteger data type :=");
	printf("\nvalue of num1 = %d",num1);
	printf("\nvalue of num2 = %d",num2);
	printf("\nvalue of num3 = %d",num3);
	
	printf("\nenter the value f1 =");
	scanf("%f",&f1);
    printf("\nenter the value f2 =");
	scanf("%f",&f2);
    printf("\nenter the value f3 =");
	scanf("%f",&f3);

    printf("\nfloat data type :=");
    printf("\nvalue of f1 = %1f",f1);
    printf("\nvalue of f2 = %2f",f2);
    printf("\nvalue of f3 = %3f",f3);
    
    printf("\nenter the value of ch1 =");
    scanf(" %c",&ch1);
    printf("\nenter the value of ch2 =");
    scanf(" %c",&ch2);
    printf("\nenter the value of ch3 =");
    scanf(" %c",&ch3);

    printf("\ncharater data type ;=");
    printf("\nvalue of ch1 = %c",ch1);
    printf("\nvalue of ch2 = %c",ch2);
    printf("\nvalue of ch3 = %c",ch3);

	return 0;
} 
