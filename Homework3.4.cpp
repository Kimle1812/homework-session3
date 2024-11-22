#include<stdio.h>
int main(){
	float toan, van, anh;
	
	printf("Moi ban nhap diem toan: ", toan);
	scanf("%f", &toan);
	
	printf("Moi ban nhap diem van: ", van);
	scanf("%f", &van);
	
	printf("Moi ban nhap diem anh: ", anh);
	scanf("%f", &anh);
	
	float tong_diem = toan + van + anh;
	float diem_tb = tong_diem / 3;
	
	printf("Tong diem la %.2f\n", tong_diem);
	printf("Diem trung binh la %.2f\n", diem_tb);
	return 0;
}
