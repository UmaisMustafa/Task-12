#include<stdio.h>
#include<stdlib.h>

void add(int* inputs,int n){
	for(int i=0;i<n;i++){
		printf("\n Enter Element %d : ",i+1);
		scanf("%d",&inputs[i]);
	}
	printf("\n Input Done Successfully");
	return;
}

void findLarges(int* inputs,int n){
	int max=0;
	for(int i=0;i<n;i++){
	   if(max<inputs[i]){
	   	max=inputs[i];
	   }	
	}
	printf("\n Largest Element is : %d",max);
}

int main(void){
	int n;
	printf("\n Enter Number of Elements (greater then 1 less then 100 inclusive): ");
	scanf("%d",&n);
	if(n<1 || n>100){
		printf("\n Invalid Input ");
		return 0;
	}
	int* arr;
	arr=(int*)malloc(n * sizeof(int));
	add(arr,n);
	findLarges(arr,n);
	free(arr);
	return 0;	
}
