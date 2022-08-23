#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int divisors(int n, int i)
{
	if(i==1) return 1;
	if(n%i==0)	return 1+divisors(n,i-1);
	else return divisors(n,i-1);
}
int main()
{
	int n;
	cin>>n;
	int answer=divisors(n,n);
	cout<<answer;
}
