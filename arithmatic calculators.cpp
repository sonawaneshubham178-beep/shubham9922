#include<stdio.h>
int main() {
	int choice;
	double num1,num2,result;
	do{
		printf("=====Arithmatic Calcultors=====\n");
		printf("1: Addition\n");
		printf("2: Substractin\n");
		printf("3: Multiplication\n");
		printf("4: Division\n");
		printf("5: Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			    case 1:
			printf("Enter two numbers");
			scanf("%lf %lf",&num1,&num2);
			result=num1+num2;
			printf("Result: %.2lf+%.2lf=%.2lf\n",num1,num2,result);
			break;
			
				case 2:
			printf("Enter two numbers");
			scanf("%lf %lf",&num1,&num2);
			result=num1-num2;
			printf("Result: %.2lf-%.2lf=%.2lf\n",num1,num2,result);
			break;
			
				case 3:
			printf("Enter two numbers");
			scanf("%lf %lf",&num1,&num2);
			result=num1*num2;
			printf("Result: %.2lf*%.2lf=%.2lf\n",num1,num2,result);
			break;
			
			    case 4:
			printf("Enter two numbers");
			scanf("%lf %lf",&num1,&num2);
			if(num2==0){
				printf("Error: division by zero is not allowed.\n");
			}else{
				result=num1/num2;
				printf("Result: %.2lf/%.2lf=%.2lf\n",num1,num2,result);	
			}
			break;
			case 5:
			printf("Ending the programm...\n");
			break;
			default:
				printf("invalid choice! please re-enter the correct choice\n");
					}
	}while (choice != 5);
	 return 0;
}
