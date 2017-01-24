#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("enter number: ");
	scanf("%d",&a);
	for(b=0; b<=a; b++){
		for(c=0; c<b; c++){
			printf("*");
		}
		printf("\n");
	}
	for(b=a; b>=0; --b){
		for(c=1; c<b; c++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}
