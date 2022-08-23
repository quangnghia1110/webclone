#include<stdio.h>
#include<math.h>
int demso(int n)
{
    int dem=1;
    while(n>=10)
    {
        n/=10;
        dem++;
    }
    printf("%d",dem);
}
int tongso(int n)
{
    int t,s=0;
    while(n>0)
    {
    	t=n%10;
    	s=s+t;
        n/=10;
    }
    printf("%d",s);
}
int sok(int n)
{
	int k=0;
	while(pow(2,k)<=n)
	{
		k++;
	}
	printf("%d",k-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    demso(n);
    printf("\n");
    tongso(n);
    printf("\n");
    sok(n);
}