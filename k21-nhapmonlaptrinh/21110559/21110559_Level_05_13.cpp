#include<stdio.h>
#include<math.h>
double giaithua(double n)
{
       int j,gthua=1;                
       for(j=1;j<=n;j++)                 
       gthua=gthua*j;                  
       return gthua;                   
}
int main()
{
    double m, x, kq, s;
       int n;
       printf("\nNhap vao mot so x: ");scanf("%lf", &x);
       printf("\nNhap vao mot so n: ");scanf("%lf", &m);
       s = 1;                
       for (n=1; n<=m; n++)    
       s = s + (pow(x, n))/(giaithua(n));
       printf("\nKet qua bai toan la %0.2lf\n", s);
      
} 
