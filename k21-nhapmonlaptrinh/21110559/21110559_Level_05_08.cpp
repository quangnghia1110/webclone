#include<stdio.h>
int main()
{
  int n, max = 0;
    printf("\nNhap vao so nguyen lon hon 0: ");scanf("%d", &n);
  	printf("Cac uoc so cua %d là: ",n);
  for(int i = 1; i <= n; i++)
  {
    if((n % i == 0) && (i % 2 == 1))
     {
    if(i > max)
    {
       max = i;
    }
    printf("%4d", i);
     }
  }
  printf("\nUoc so lon nhat la: %d",n,max);
}
