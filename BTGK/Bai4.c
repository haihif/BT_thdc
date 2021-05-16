// Tinh gia tri bieu thuc
#include<stdio.h>
#include<math.h>
const float pi = 3.1416;

float logx(float a, float b){
	return (log(a))/(log(b));
}
float Ax(float x){
	float a,b,ans;
	
	a = sqrt(pow(2,x) + pi);
	b = log(pow(exp(1), x + 1.23) + 1);
	ans = (cos(3*a) + pow(2*x*x*x + x +1, 1.0/5))/(logx(pow(3,x*x) + 2.14*b, 7));
	
	return ans;
}
int main() {
	float x;
	printf("Nhap x: ");
	scanf("%f", &x);
	
	printf("\nA = %f",Ax(x));
	return 0;
}

