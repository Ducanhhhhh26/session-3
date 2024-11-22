#include<stdio.h>
int main(){
	int unit;
	int hundred;
	int thousand;
	int ten;
	int soNguyen;
	int sum; 
	printf("Moi ban nhap so nguyen co 4 chu so: ");
	scanf("%d",&soNguyen);
	unit = soNguyen%10;
	ten = (soNguyen/10)%10;
	hundred = (soNguyen/100)%10;
	thousand = (soNguyen/1000)%10;
	sum = unit + hundred + thousand + ten;
	printf("Tong cac chu so trong so nguyen do la %d",sum);
	return 0;
	 
	 
} 
