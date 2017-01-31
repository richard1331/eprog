#include<stdio.h>
int main(){
int i, grades[3];
float a=0.0;

for(i=0;i<3; i++){
	printf("Enter grade %d: ", i+1);
scanf("%d", &grades[i]);
a += grades[i];
}

printf("%.2f", a/3);

if (a/3>75)
printf("passed\n");
else
printf("failed");
}

