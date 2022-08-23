#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int demsoluongsolonnhat(int a[],int n)
{
	int dem=0;
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			dem++;
		}
		else if(a[i]>max)
		{
			max=a[i];
			dem=1;
		}
	}
	return dem;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int dem=demsoluongsolonnhat(a,n);
	printf("co %d la cac so lon nhat trong mang",dem);
	return 0;

}
