#include<stdio.h>
#include<stdlib.h>

int main(void){
	int x;
	printf("Enter Number of Elements : ");
	scanf("%d",&x);
	int *array;
	array=(int*)malloc(x*sizeof(int));
	for(int i=0;i<x;i++){
		printf("\n Enter element %d",i+1);
		scanf("%d",&array[i]);
		if(array[i]%2 != 0){
			array[i]-=1;
		}
	}
	for(int i=0;i<x;i++){
		printf("\n Element %d : %d",i+1,array[i]);
	}
	free(array);
	
}
