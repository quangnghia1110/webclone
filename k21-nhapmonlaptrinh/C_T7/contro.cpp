#include <stdio.h>
#include <malloc.h>
int main()
{
int n,i,*p,*le,j=0,dem=0;
do{
printf("Moi ban nhap vao so phan tu cua mang: ");
scanf("%d",&n);}while(n<1);
p=(int *)malloc(n*sizeof(n));
if(p!=NULL)
{
for(i=0;i<n;i++)
{
printf("Moi ban nhap vao gia tri cho phan tu %d: ",i);
scanf("%d",&*(p+i));
}
for(i=0;i<n;i++)if(*(p+i)%2==1)dem++;
if(dem==0)printf("Mang ko co so le");
else
{	le=(int *)malloc(dem*sizeof(dem));
for(i=0;i<n;i++)if(*(p+i)%2==1)
{*(le+j)=*(p+i);
j++;
}
printf("Mang so le vua copy duoc la:\n");
for(j=0;j<dem;j++)printf("%d ",*(le+j));
}

}
free(p);
free(le);
}

