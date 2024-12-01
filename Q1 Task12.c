#include<stdio.h>
#include<stdlib.h>
int main(void){
int n, num;;
printf("Enter Number of students : ");
scanf("%d",&n);
int **grades=(int **)malloc(n * sizeof(int *));
for(int i=0;i<n;i++){

printf("\n enter Number of grades for student : %d ",i+1);
scanf("%d",&num);
grades[i]=(int * )malloc(num * sizeof(int *));
for(int j=0;j<num;j++){
printf("\n Enter grade %d for student %d : ",j+1,i+1);
scanf("%d",&grades[i][j]);
}
}
printf("\n Display ....... ");
for(int i=0;i<n;i++){
for(int j=0;j<num;j++){
printf("\n Grade %d for student %d : %d",j+1,i+1,grades[i][j]);
}
}
for (int i=0;i<n;i++){
free(grades[i]);
}
free(grades);
return 0;
}
