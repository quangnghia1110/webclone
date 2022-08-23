#include<iostream>
void NhapFile();
void XuatFile();
int m,n,A[100][100];
int main(){
	NhapFile();
	XuatFile();
}
void NhapFile(){
	FILE* fi;
	fi = fopen("matran.txt","rt");
	if (fi==NULL)
		printf("Khong doc duoc File!");
	else{
		fscanf(fi,"%d%d",&m,&n);
		for (int i=0;i<m;i++)
			for (int j=0;j<n;j++)
				fscanf(fi,"%d",&A[i][j]);
		fclose(fi);
	}
}
void XuatFile(){
	FILE *fo;
	fo = fopen("ketqua.txt","wt");
	if (fo==NULL)
		printf("Khong mo duoc File!");
	else {
		fprintf(fo,"%d %d\n",m,n);
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++)
				fprintf(fo,"%d ",A[i][j]);
			fprintf(fo,"\n");
		}
		fclose(fo);
	}
}

