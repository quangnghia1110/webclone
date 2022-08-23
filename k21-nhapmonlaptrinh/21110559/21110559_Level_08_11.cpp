#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int Am(int a[], int n)
{
	{
		for (int i=0; i<n; i++)
		if (a[i]<0)
		return i; 
	} 
	return -1;
}

int SoAmLonNhat(int a[], int n)
{
	int i;
	int vitrimin=Am(a,n);
	if(vitrimin!=-1)
	{
		for(i=vitrimin; i<n; i++)
			if(a[i]<0 && a[i]>a[vitrimin])
				vitrimin=i;
		return vitrimin;
	}
	return -1;
}

int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int ketqua=SoAmLonNhat(a,n);
     if(SoAmLonNhat==0)
    	printf("-1");
    else
    	printf("%d",ketqua);
}
