#include<stdio.h>
#include<math.h>
void nhap(int a[], int &n){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
bool ktsnt(int n) {
	if (n < 2) {
		return false;
	}
if(n == 2 || n == 3){
    return true;
}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}  
	}
	return true;
}
int minlonx(int n, int a[]){
    int min = 99999;
    int x;
	for (int i = 0; i < n; i++) {
		if (ktsnt(a[i]) && a[i] < min ) {
			min = a[i];
			if(a[i]>x&&a[i]<min)
			{
				
				min=a[i];
			}
			
		}
    }
    if (min == 99999)
        return 0;
    else 
        return min;
}
int main(){
    int a[10000];
    int n;
    int x;
    nhap(a,n);
    scanf("%d",&x);
    printf("%.d",minlonx(n,a));   
    return 0;
}