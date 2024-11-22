#include<stdio.h>
int main(){
	float celsius, fahrenheit; 
	printf("moi ban nhap nhiet do Celsius: ");
	scanf("%f",&celsius);
	fahrenheit = (celsius* 9/5) + 32;
	printf("Nhiet do theo do fahrenheit la: %2f \n",fahrenheit);  
	
	return 0; 
} 
