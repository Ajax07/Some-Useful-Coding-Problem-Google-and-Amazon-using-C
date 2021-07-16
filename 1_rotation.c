#include <stdio.h>

int main(){
	int Arr[]={1,5,3,4,2,7,3};
	int size = sizeof(Arr)/sizeof(Arr[0]);
	int i,j;
	int pos;
	printf("Hello riya kesi ho\n");
	for(i=0;i<size;i++){
		printf("%d\n",Arr[i] );
	}
	printf("How many time you want to rotate\n");
	scanf("%d",&pos);
	for(i=0;i<pos;i++){
		for(j=0;j<size;j++){
			int temp = Arr[j];
			Arr[j] = Arr[j+1];
			Arr[j+1] = temp;
		}
	}
	printf("the rotation array is\n");
	for(i=0;i<size;i++){
		printf("%d\n",Arr[i] );
	}
	return 0;
}