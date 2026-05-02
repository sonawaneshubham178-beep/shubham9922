#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp =*a;
	*a = *b;
	*b = temp;
}
int main(){
	int num1, num2;
	printf("enter a number:");
	scanf("%d",&num1);
	printf("enter a second number:");
	scanf("%d",&num2);
	printf("\nBefore swaping: num1 = %d, num2 = %d\n");
	swap(&num1, &num2);
	printf("After swaping:num1 = %d, num2= %d\n", num1,num2);
	return 0;
}
