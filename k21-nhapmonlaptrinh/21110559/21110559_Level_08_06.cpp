#include <stdio.h>
#include <conio.h>
main()
{
	int i,n,a,b,dem=0,dem1=0;
	int j,t;
	float A[50],x,min,max,B[50],C[50],tong=0;
	printf("Nhap so nguyen duong 1<=n<=50: ");
	do{
		printf("\nn = ");scanf("%d",&n);
		if (n<1||n>50)
		printf("\nSo %d khong hop le: \nNhap lai",n);
	}while(n<1||n>50);
	//Nhap day so thuc
	printf("\nNhap vao day %d So thuc : ",n);
	for (i=0;i<n;i++){
		printf("\nA[%d] = ",i);
		scanf("%f",&A[i]);
	}
	printf("\nDay vua nhap la: ");
	for (i=0;i<n;i++){
		printf("    %g",A[i]);
	}
	max=A[0];
	for (i=0;i<n;i++){
		if (A[i]>max)
		max=A[i];
	}
	printf("\nGia tri phan tu max la: %g",max);
	printf("   O vi tri : ");
	for (i=0;i<n;i++){
		if (max==A[i]){
		printf(" %d",i+1);
	}
	}
	min=A[0];
	for (i=0;i<n;i++){
		if (A[i]<min)
		min=A[i];
	}
	printf("\nGia tri phan tu max la: %g",min);
	printf("   O vi tri : ");
	for (i=0;i<n;i++){
		if (min==A[i])
		printf(" %d",i+1);
	}
	for (i=0;i<n;i++){
		if (A[i]==min)
			a=i;
		if (A[i]==max)
			b=i;
	}
	t=A[a];
	A[a]=A[b];
	A[b]=t;
	

	printf("\n Day sau khi doi cho la : ");
	for (i=0;i<n;i++){
		printf("    %g",A[i]);
	}
	getch();
	return 0;
}
