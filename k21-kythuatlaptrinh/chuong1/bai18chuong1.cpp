#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int kt_so(int a[], int n, int x);
void tao_file();

int main() {
	srand((unsigned)time(NULL));
	tao_file();
	return 0;
}
void tao_file() {
	fstream output;
	output.open("SONGUYENBAI20.INP", ios::out);
	if (output) {
		int d = 0, n = 10000;
		int b[32767] = {0};
		while (d<n) {
			int x = 1 + rand()%32767;
			if (b[x]==0) {
				b[x] = 1;
				output << x << " ";
			
				d++;
				
			}
			cout<<x<<" ";
			
		}
		output.close();
	}
}

