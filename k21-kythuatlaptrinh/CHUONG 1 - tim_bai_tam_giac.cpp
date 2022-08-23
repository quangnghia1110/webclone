#include<stdio.h>
#include<math.h>
struct DIEM
{
	int x;
	int y;	
};
struct TAMGIAC
{
	DIEM d1;
	DIEM d2;
	DIEM d3;	
};

void nhap(TAMGIAC &so){
	scanf("%d %d", &so.d1.x,&so.d1.y);
	scanf("%d %d", &so.d2.x,&so.d2.y);
	scanf("%d %d", &so.d3.x,&so.d3.y);
}
void xuat(TAMGIAC so){
	printf("%d %d - %d %d - %d %d",so.d1.x,so.d1.y,so.d2.x,so.d2.y,so.d3.x,so.d3.y);
}
double doDaiCanh(DIEM diem1, DIEM diem2){
	return 1.0*sqrt((diem1.x - diem2.x)*(diem1.x-diem2.x) + (diem1.y-diem2.y)*(diem1.y-diem2.y));
}
double chuVi(double a, double b, double c){
	return 1.0*(a + b + c);
}
double dienTich(double a, double b, double c){
	double temp = 1.0*chuVi(a,b,c) / 2;
	return 1.0*sqrt(temp *(temp - a) * (temp - b) * (temp - c));
}
int main(){
	TAMGIAC so;
	double a, b, c;
	double chuvi, dientich;
	nhap(so);
	a = doDaiCanh(so.d1,so.d2);
	b = doDaiCanh(so.d1,so.d3);
	c = doDaiCanh(so.d2,so.d3);
	xuat(so);
	chuvi = chuVi(a,b,c);
	dientich = dienTich(a,b,c);
	printf("\nChu Vi = %.2f",chuvi);
	printf("\nDien Tich = %.2f",dientich);
	return 0;
}
