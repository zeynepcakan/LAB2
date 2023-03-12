#include <stdio.h>
#include <stdlib.h>

int bas(int num);

int main() {
	
	int number,sum;
	printf("Please enter a number: ");
	scanf("%d",&number);
	sum=bas(number);
	printf("Sum the digits of number= %d",sum);
	return 0;
	
}

int bas(int num){
	if(num>0)
		return (num%10) + bas(num/10);
	else 
		return 0;	
}
