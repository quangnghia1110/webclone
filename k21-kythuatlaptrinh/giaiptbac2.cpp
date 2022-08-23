#include<iostream>
#include<math.h>
using namespace std;
int giaipt( float a, float b, float c, float &x1, float &x2)
{
	if(a==0)
		if(b==0)
			if(c==0)
				return 4;
			else
				return 0;
		else
		{
			x1=-c/b;
			return 1;
		}
	else
	{
		float delta=b*b-4*a*c;
		if(delta<0)
			return 0;
		else
			if(delta==0)
			{
				x1= -b/(2*a);
				return 3;
			}
			else
			{
				x1=(-b+sqrt(delta))/(2*a);
					x2=(-b-sqrt(delta))/(2*a);
				return 2;
			}
	}
}

void nhap(float &a,float &b, float &c)
{
	cin>>a>>b>>c;
}
void xuat( int co, float x1, float x2)
{
	if(co==0)
		cout<<"PT vo nghiem";
	else
		if(co==1)
			cout<<"Pt co 1 nghiem x= "<<x1;
		else
			if(co==2)
				cout<<"Pt co 2 nghiem phan biet x1="<<x1<<" x2="<<x2;
			else
				if(co==3)
					cout<<"Pt co nghiem kep x1= x2= "<<x1;
				else
					cout<<"Pt co nghiem tuy y";
}
int main()
{
	float a,b,c,x1,x2;
	nhap(a,b,c);
	int co=giaipt(a,b,c,x1,x2);
	xuat(co,x1,x2);
}