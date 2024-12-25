#include<stdio.h>
#include<string.h>

int main(){
	FILE *fprt;
	fprt=fopen("bt01.txt","a");
	if(fprt==NULL){
		printf("file khong tim thay\n");
		return 0;
	}
	char chuoi[100];
	printf("nhap chuoi muon ghi them : ");
	fgets(chuoi,100,stdin);
	printf("%s",chuoi);
	fclose(chuoi);
	return 0;
}
