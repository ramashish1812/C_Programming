//add-sub-multi-rem
#include<stdio.h>
int main()
{
    int num1,num2,ans;
    
	printf("\nenter the value of num1 =");
	scanf("%d",&num1);
	printf("\nenter the value of num2 =");
	scanf("%d",&num2);
	ans = num1 + num2;
    printf("\nthe addition of %d and %d is %d",num1,num2,ans);
	
	printf("\nenter the value of num1 =");
	scanf("%d",&num1);
	printf("\nenter the value of num2 =");
	scanf("%d",&num2);
	printf("\nthe subtration of %d and %d of %d",num1,num2,num1-num2);
	
	printf("\nenter the value of num1 =");
	scanf("%d",&num1);
	printf("\nenter the value of num2 =");
	scanf("%d",&num2);
	printf("\nthe multiplication of %d and %d of %d",num1,num2,num1*num2);
	
	printf("\nenter the value of num1 =");
	scanf("%d",&num1);
	printf("\nenter the value of num2 =");
	scanf("%d",&num2);
	printf("\nthe remander of %d and %d of %d",num1,num2,num1%num2);
			
	return 0;
}
