#include<stdio.h>
int main(){

	int number1, number2,multiply;
	
	printf("enter numbers:");
	scanf("%d %d",&number1,&number2);
	multiply=number1*number2;
	
	printf("%d*%d=%d",number1,number2,multiply);
	return 0;
}
