#include<stdio.h>

int main(){
	int grade;
  
	printf("Enter grade:");
	scanf ("%d", &grade);
	printf("Grade is: %d\n",grade);
	if (grade>=75){
		printf("passed\n");
	}else{
		printf("failed\n");
	}
}
