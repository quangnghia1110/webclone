#include<iostream>
#include<string.h>
using namespace std;
string Sosanh(string a, string b) {
	if (a.size() > b.size())
		return a;
	if (a.size() <b.size())
		return b;
	if (a.size() == b.size())
		for (int i = 0; i < a.size(); i++)
		{
			if(a[i]>b[i])
				return a;
			if (a[i] < b[i])
				return b;
		}
	return a;
 }
int main() {
	string s1, s2, s3, s;
	cin >> s1 >> s2 >> s3;
	s = Sosanh(s1, Sosanh(s2, s3));
	cout << s;
	return 0;
}
