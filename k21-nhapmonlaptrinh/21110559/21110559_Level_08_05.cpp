#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhap (int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int KiemTraDangSong(int a[], int n)
{
	int flag = 1;
	for(int i = 1; i < n - 1; i++)
	{
		if((a[i] < a[i - 1] && a[i] > a[i + 1]) || (a[i] > a[i - 1] && a[i] < a[i + 1]))
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n, d;
	int a[100];
	printf("nhap n: ");scanf("%d",&n);
		nhap(a, n);
	xuat(a, n);
	int flag = KiemTraDangSong(a, n);
	if(flag == 1)
	{
		printf("\nCac phan tu trong mang co dang song");
	}
	else
	{
	printf("\nKhong thoa DK");
	}
	return 0;
}
