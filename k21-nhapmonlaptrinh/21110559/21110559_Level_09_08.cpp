#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
void lietketansuat(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				if(i<=j)
				{
					dem++;
				}
				else 
				{
					break;
				}
			}
		
		}
			if(dem!=0)
			{
				printf("Gia tri %d co tan suat xuat hien la %d\n",a[i],dem);
			}
	}
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    lietketansuat(a,n);
	return 0;

}
