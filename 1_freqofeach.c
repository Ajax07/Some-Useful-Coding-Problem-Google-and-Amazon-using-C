#include <stdio.h>

int main(){
	int i,j;
	int array[]={8,5,3,9,9,4,7,1,2,6};
	int size=sizeof(array)/sizeof(array[0]);
	int freq[10];
	int count;
	printf("Hello riya\n");
	for(i=0;i<size;i++){
		count =1;
		for(j=i+1;j<size;j++){
			if(array[j]==array[i]){
				count=count+1;
				freq[j]=-1;
			}
		}
		if(freq[i]!=-1){
			freq[i]=count;
		}
	}
	printf("the array is \n");
	for(i=0;i<size;i++){
		printf("array %d\n",array[i] );
	}
	printf("the freq of each element\n");
	for(i=0;i<size;i++){
		if(freq[i]!=-1){
			printf("freq %d\n",freq[i] );
		}
	}
	return 0;
}