#include <stdio.h>

int main(){
	int a[5];
	int i,sum=0;
	printf("Enter the array\n");
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
	printf("%d\n",a[i] );
	}
	for(i=0;i<5;i++){
		sum = sum + a[i];
	}
	printf("the sum is %d\n",sum );
	printf("Checking number is odd or even\n");
	for(i=0;i<5;i++){
	if(a[i]%2==0){
		printf("the number is even : %d\n",a[i]);
	}
	else{
		printf("the number is odd : %d\n",a[i]);
	}
	}
	for(i=3;i<=30;i=i+3){
		printf("%d\n",i );
	}

	return 0;
}