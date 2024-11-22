#include<stdio.h>
int main (){
	int toanMark,vanMark,anhMark;
	int total;  
	float avg; 
	printf("Moi ban nhap diem 3 mon Toan,Van,Anh: ");
	scanf("%d,%d,%d", &toanMark,&vanMark,&anhMark);
	total = toanMark + vanMark + anhMark;
	avg = (float)total/3;  
	printf("Vay tong diem 3 mon cua ba la %d",total);
	printf("\nDiem trung binh cua ban la %2f",avg); 
	
	return 0;  
}  
