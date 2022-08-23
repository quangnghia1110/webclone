#include<iostream>
#include<string.h>
using namespace std;


void timgiatri(float A);


int main(){
	float A;
	do{
		cin >> A;
		if(A <= 0 || A >= 4){
			cout << "nhap sai, nhap lai: "; 
		}
	} while(A <= 0 || A >= 4); 
	timgiatri(A);
} 


void timgiatri(float A){
	float sum = 0; 
	int i = 0;
	while(sum <= A){
		i++; 
		sum = sum + 1.0/i; 
		} 
	
	cout << i; 
}