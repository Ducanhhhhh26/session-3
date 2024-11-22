#include<stdio.h>
int main (){
	const float pi = 3.14;
	int r;
	float chuVi;
	float dienTich; 
	printf("moi ban nhap ban kinh hinh tron:  ");
	scanf("%d",&r);
	chuVi =  2*r*pi; 
	dienTich = r*r*pi;
	printf("Vay chu vi hinh tron la %f",chuVi);
    printf("\nDien tich hinh trong la %f",dienTich); 
	return 0; 
} 
