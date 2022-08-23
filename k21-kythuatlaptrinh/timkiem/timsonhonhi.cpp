#include<stdio.h>
int main()
{
    int a,b,c,nhat,nhi;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	nhi = a;
	if (nhi > b)
	{
		nhi = b; 
        nhat = a;
	}
	else 
        nhat = b;
	if (nhi > c)
		printf("%d", nhi);
	else {
		if (c< nhat)
			printf("%d", c);
		else 
			printf("%d", nhat);}
	return 0;
}