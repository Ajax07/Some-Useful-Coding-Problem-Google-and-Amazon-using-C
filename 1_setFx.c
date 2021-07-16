#include <stdio.h>


void riya_intersection(int Arr1[], int Arr2[], int m, int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(Arr1[i]<Arr2[j])
			i++;
		else if(Arr2[j]<Arr1[j])
			j++;
		else{
			printf("%d\n",Arr2[j++]);
			i++;
		}

	}
}

void riya_union(int Arr1[], int Arr2[], int m, int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(Arr1[i]<Arr2[j]){
			printf("%d\n",Arr1[i++]);
		}
		else if(Arr2[j]<Arr1[i]){
			printf("%d\n",Arr2[j++] );
		}
		else{
			printf("%d\n",Arr2[j++] );
			i++;
		}
	}

		while(i<m){
			printf("%d\n",Arr1[i++] );
		}
		while(j<n){
			printf("%d\n",Arr2[j++] );
		}
}	

int main(){
	int Arr1[]={1,3,5,7,9};
	int Arr2[]={1,2,3,4,6};
	printf("Calling union function\n");
	riya_union(Arr1,Arr2,5,5);
	printf("Calling union function\n");
	riya_intersection(Arr1,Arr2,5,5);
	return 0;
}