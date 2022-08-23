#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

void tao_file();
void doc_file();
void xep_mang(int a[], int n);
void doi_cho(int &a, int &b);
void file_output(int a[], int n);

int main() {
	srand((unsigned)time(NULL));
	tao_file();
	doc_file();
	return 0;
}

void file_output(int a[], int n) {
	ofstream output;
	output.open("SONGUYENBAI19.OUT");
	int dem = 0;
	for(int i=0;i<n;i++) {
		output << a[i] << " ";
		dem++;
		if (dem%10==0)
			output << "\n";
	}
	output.close();
}

void doi_cho(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void xep_mang(int a[], int n) {
	int i,j;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if (a[i] > a[j])
				doi_cho(a[i], a[j]);
		}
	}
}

void doc_file() {
	fstream input("SONGUYENBAI19.INP", ios::in|ios::binary);
	if (!input) {
		cout << "Khong mo duoc file";
		exit(0);
	}
	int n = 0;
	int a[10000];
	while (true) {
		int b[10];
		input.read(reinterpret_cast<char *>(&b), sizeof(b));
		char c;
		input.read(reinterpret_cast<char *>(&c), sizeof(c));
		if (input.eof())
			break;
		for (int i = 0;i<10;i++) {
			a[n] = b[i];
			n++;
		}
	}
	input.close();
	cout << "----------------------------------";
	for (int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
}

void tao_file() {
	fstream output;
	output.open("SONGUYENBAI19.INP", ios::out|ios::binary);
	if (output) {
		int a[10];
		int n = 10000;
		for(int i = 1;i<=n;i++) {
			for(int j = 0;j<10;j++) {
				a[j] = rand()%10;
				cout << a[j] << " ";
			}
			output.write(reinterpret_cast<char *>(&a), sizeof(a));
			output.write("\n",1);
			cout<<"\n";
		}
		output.close();
	}
}
