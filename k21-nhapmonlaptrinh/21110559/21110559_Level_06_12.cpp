#include<stdio.h>
int main()
{
    int n, a[200];
    int vitri=0;
    int x;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
        	vitri==i;
         
        }
        return 1;return 1;

    }
    if(vitri==1)
    {
    printf("%d ",vitri);}
    else
    printf("-1");
}