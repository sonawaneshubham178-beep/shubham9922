#include<stdio.h>
int main(){
	int array[8] = {55,86,32,44,23,49,98,549};
	int *ptr;
	int i;
	ptr = array;
	printf("accessing array element using pointer:\n");
	for(i = 0; i < 10; i++ )
	{ 
	printf("element %d = %d\n",i,*(ptr + i ));
	}
	return 0;
}
