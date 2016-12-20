#include<stdio.h>

int main(){
	int grade;
  
	printf("Enter a number:");
	scanf ("%d", &grade);
	if (grade%3==0){
		printf("Ed\n");
	}else{
		printf("\n");

	}
	if (grade%5==0){
		printf("Pogi\n");
	}else{
		printf("\n");
	}
}
