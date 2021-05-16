//Tim do dai canh va duong trung tuyen
#include<stdio.h>

int main() {
	
	float ax, ay, AB;
	float bx, by, BC;
	float cx, cy, AC;
	float a, b, c;
	
	printf("Nhap toa do diem A: ");
	scanf("%f %f", &ax, &ay);
	printf("\nNhap toa do diem B: ");
	scanf("%f %f", &bx, &by);
	printf("\nNhap toa do diem C: ");
	scanf("%f %f", &cx, &cy);
	
	AB = sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by));
	BC = sqrt((cx - bx)*(cx - bx) + (cy - by)*(cy - by));
	AC = sqrt((ax - cx)*(ax - cx) + (ay - cy)*(ay - cy));
	
	a = BC;
	b = AC;
	c = AB;
	
	printf("\nDo dai 3 canh tam giac ABC la: %f %f %f", AB, BC, AC);
	
	printf("\nDo dai duong trung tuyen ma = %f", sqrt(2*(b*b + c*c)- a*a) / 2);
	printf("\nDo dai duong trung tuyen mb = %f", sqrt(2*(a*a + c*c)- b*b) / 2);
	printf("\nDo dai duong trung tuyen mc = %f", sqrt(2*(b*b + a*a)- c*c) / 2);
	
	return 0;
}

