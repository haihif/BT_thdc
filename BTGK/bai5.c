//tim dien tich va chu vi hinh tron
#include<stdio.h>
const float pi = 3.1416;
int main() {
	float r, s, c;
	printf("Nhap ban kinh: "); scanf("%f", &r);
	printf("Dien tich hinh tron la: %f", pi*r*r);
	printf("\nChu vi hinh tron la: %f", 2*pi*r);
	return 0;
}

