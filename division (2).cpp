#include<stdio.h>
int main(){

	int number1, number2,divide;
	
	printf("enter numbers:");
	scanf("%d %d",&number1,&number2);
	divide=number1*number2;
	
	printf("%d/%d=%d",number1,number2,divide);
	return 0;
}
