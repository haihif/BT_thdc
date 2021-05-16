//Tim dien tich va chieu cao cua tam giac
#include<stdio.h>

int main() {
	float a, b, c;
	float s, p;
	
	printf("Nhap do dai 3 canh a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	p = (a + b + c) / 2;
	
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Dien tich cua tam giac: %f\n", s);
	
	printf("Chieu cao h1: %f\n", s*2 / a);
	printf("Chieu cao h2: %f\n", s*2 / b);
	printf("Chieu cao h3: %f\n", s*2 / c);
	
	return 0;
}

