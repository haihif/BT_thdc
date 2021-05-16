// Tim trung binh cong cua f(1), f(2), f(3)
#include<stdio.h>
#include<math.h>
float f(float x){
	float fx;
	
	fx = pow(x,7) + 5*pow(pow(x,5) + 3*pow(x,3) + 2, 1.0/3) + 12;
	
	return fx;
}
int main() {
	float a, b, c;
	
	printf("Nhap 3 gia tri (a,b,c) cua x: ");
	scanf("%f %f %f",&a, &b, &c);
	
	printf("Trung binh cong cua f(a), f(b), f(c) la: %f", (f(a) + f(b) + f(c)) / 3 );
	
	return 0;
}

