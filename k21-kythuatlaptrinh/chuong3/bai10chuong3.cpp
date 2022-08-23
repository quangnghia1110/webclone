#include<iostream>
#include<string.h> 
using namespace std;


int main(){
	char S[100];
	gets(S);  

	char thuong[100], hoa[100], so[100], khac[100];
	int a = 0, b= 0, c = 0, d = 0; 
	int len = strlen(S);
	for(int i = 0; i < len; i++){
		if(S[i] >= 'a' && S[i] <= 'z'){
			thuong[a++] = S[i]; 
		} 
		else if(S[i] >= 'A' && S[i] <= 'Z'){
			hoa[b++] = S[i]; 
		} 
		else if(S[i] >= '0' && S[i] <= '9'){
			so[c++] = S[i]; 
		} 
		else khac[d++] = S[i]; 
		
	}
	thuong[a++] = '\0';
	hoa[b++] = '\0';
	so[c++] = '\0';
	khac[d++] = '\0'; 
	cout << "kieu thuong: "; 
	puts(thuong); 
	cout << "kieu hoa: "; 
	puts(hoa);
	cout << "kieu so: "; 
	puts(so);
	cout << "kieu khac: "; 
	puts(khac); 

}