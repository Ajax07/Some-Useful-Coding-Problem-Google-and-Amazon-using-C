#include <stdio.h>

int main(){
	int num,num2=0;
	int sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0){
		int x = num%10;
		printf("the reverse is %d\n",x );
		num2 = (num2*10) + x;
		sum = sum +x;
		num = num/10;
	}
	printf("the sum is %d and reverse is %d\n",sum,num2 );
	return 0;
}