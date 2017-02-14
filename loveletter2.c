#include <stdio.h>
#include <string.h>
main(){
	char ch;
	FILE *myFile;
	myFile=fopen("input.txt","r");
	while(!feof(myFile)){
		ch=getc(myFile);
		printf(" %d ",ch);
	}
}
