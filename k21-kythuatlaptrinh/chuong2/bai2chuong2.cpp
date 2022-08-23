#include <iostream>
#include<string.h>
using namespace std;
 
int tim(int a[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}
 
int main() {
  int a[] = {2, 3, 4, 40, 50, 10};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 10;
  int kq = tim(a, n, x);
  if (kq != -1) 
  {
   	cout<<kq;
  } 
  else 
  {
    cout<<"KHONG CO";
  }
  return 0;
}