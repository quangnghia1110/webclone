#include <stdio.h>
int main()
{
	int i,a[3][4],j,tam,n;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	do{ 
		printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
		scanf("%d",&a[i][j]);}while(a[i][j]<=0);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	for(n=j+1;n<4;n++)
	{
		if(a[i][j]>a[i][n])
		{
			tam=a[i][j];
			a[i][j]=a[i][n];
			a[i][n]=tam;
		}

	}	
	printf("Mang sau khi sap xep la:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)printf("%d ",a[i][j]);
		printf("\n");
	}
}
