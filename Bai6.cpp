#include<stdio.h>
int main (){
	int  canh;
	int chieuCao; 
	float dienTich; 
	printf ("Moi ban nhap canh cua hinh tam giac: "); 
	scanf("%d",&canh); 
	printf ("Moi ban nhap chieu cao cua hinh tam giac: ");
	scanf("%d",&chieuCao); 
	dienTich =(float) (chieuCao * canh) *1/2; 
	printf("Vay dien tich cua hinh tam giac la %.2f",dienTich);
	return 0; 
} 
