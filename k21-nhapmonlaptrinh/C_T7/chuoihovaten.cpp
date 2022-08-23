#include <stdio.h>
#include <string.h>
int main()
{
	char s[5][30];
	int i,j,dem,l;
	printf("Nhap ten sinh vien\n");
	for(i=0;i<5;i++)
	{	
		printf("Moi ban nhap ten cho sv thu %d: ",i);
		gets(s[i]);
	}
	printf("\nDanh sach cac sv da nhap\n");
	for(i=0;i<5;i++)
		printf("SV thu %d co ho ten la: %s\n",i,s[i]);
	printf("\nTen cac sv vua nhap\n");
	for(i=0;i<5;i++)
	{	
	 	dem=0;
		l=strlen(s[i]);
		for(j=l-1;j>0;j--)if(s[i][j]==' ')break;else dem++;
		for(j=l-dem;j<l;j++)printf("%c",s[i][j]);
		printf("\n");
	}
}
