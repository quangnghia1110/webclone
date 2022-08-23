#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void doc_file() {
	fstream input("SONGUYEN.TXT", ios::in);
	if (!input) {
		cout << "Khong mo duoc file";
		exit(0);
	}
	input.close();
	cout << "----------------------------------";
}
void tao_file() {
	fstream output;
	output.open("SONGUYEN.TXT", ios::out);
	if (output) {
		int a[10];
		int n = 50;
		for(int i = 1;i<=n;i++) {
			for(int j = 0;j<10;j++) {
				a[j] = rand()%50;
				cout << a[j] << " ";
			}
			cout<<"\n";
		}
		output.close();
	}
}
int main() {
	srand((unsigned)time(NULL));
	tao_file();
	doc_file();
	return 0;
}
