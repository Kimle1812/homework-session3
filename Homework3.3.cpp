#include<stdio.h>
int main(){
	float radius;
	printf("Moi ban nhap ban kinh hinh tron: ", radius);
	scanf("%f", &radius);
	float pi = 3.14;
	float chuvi = 2 * radius * pi;
	float dientich = pi * radius * radius;
	printf("Chu vi hinh tron la %.2f\n", chuvi);
	printf("Dien tich hinh tron la %.2f\n", dientich);
	return 0;
}
