#include<stdio.h>
int main(){
	int unit;
	int hundred;
	int thousand;
	int ten;
	int soNguyen ; 
	int soDaonguoc; 
	printf("Moi ban nhap so nguyen co 4 chu so: ");
	scanf("%d",&soNguyen);
	unit = soNguyen%10*1000; 
	ten = (soNguyen/10)%10*100; 
	hundred = (soNguyen/100)%10*10; 
	thousand = (soNguyen/1000)%10;
	soDaonguoc =  unit + ten + hundred + thousand; 
	printf("So dao nguoc cua so nguyen da cho la %d",soDaonguoc);
	return 0;
	 
	 
} 
