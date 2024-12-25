#include<stdio.h>

int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	if (fptr == NULL) { 
        printf("Khong the mo file.\n");
        return ;
    }
	char chuoi[100];
    printf("moi ban nhap nhap chuoi : ");
    fgets(chuoi, sizeof(chuoi), stdin);

    
    fprintf(chuoi, "%s", chuoi);

   
    fclose(chuoi);

  
	return 0;
}
