#include<stdio.h>

int main(){
	FILE *fptr;
	fptr =fopen("bt01.txt","r");
	if(fptr==NULL){
		printf("file khong tim thay !");
		return;
	}
	char myText[100];
	fgets(myText,100,fptr);
	
	printf("thong tin trong file :%s ",myText);
	fclose(fptr);
	return 0;
}
