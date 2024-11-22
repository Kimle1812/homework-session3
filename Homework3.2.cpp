#include<stdio.h>
int main (){
	int fahrenheit;
	int celsius;
	printf("Moi ban nhap do C de chuyen sang do F ");
	scanf("%d", &celsius);
	fahrenheit = 9 * celsius / 5  + 32;
	printf("Ket qua la %d\n", fahrenheit);
	return 0;
}
