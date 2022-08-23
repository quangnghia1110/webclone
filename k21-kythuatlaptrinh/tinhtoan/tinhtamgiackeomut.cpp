#include <iostream>
using namespace std;
int main()
{
	int a,b,c,m;
	cin >> a >> b >> c;
	if (a>b+c)
		m=a-b-c+1;
	else
		if	(b>a+c)
			m=b-c-a+1;
		else
			if (c>a+b)
				m=c-a-b+1;
	cout << m;
	return 0;				
}