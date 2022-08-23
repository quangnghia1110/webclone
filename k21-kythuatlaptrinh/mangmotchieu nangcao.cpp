#include<stdio.h>
#include <math.h>


int xuatmang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

bool kiemtrasnt(int n)
{
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void xuatsnt(int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (kiemtrasnt(a[i])) {
            printf("%d ", a[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("KHONG CO");
    }
}


void tongsnt(int n, int a[]){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (kiemtrasnt(a[i])) {
            sum += a[i];
        }
    }
    printf("%d", sum);
}

void trituyetdoi(int n, int a[]) {
    int min = 9999;
    
    for (int i = 0; i < n; i++) {
        if (abs(min) >  abs(a[i])) {
            min = a[i];
           
        }
    }
    if (min == 0) {
        printf("KHONG CO");
    }
    else
    printf("%d", min);
}

void kiemtratangdan(int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                count++;
            }
       }
    }
    if (count == 0) {
        printf("TANG");
    }
    else printf("KHONG TANG");
}

void sapxepgiamdan(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[100], n;
 scanf("%d", &n);
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    xuatmang(n, a);
    printf("\n");
    xuatsnt(n, a);
    printf("\n");
    tongsnt(n, a);
    printf("\n");
    trituyetdoi(n, a);
    printf("\n");
    kiemtratangdan(n, a);
    printf("\n");
    sapxepgiamdan(n, a);
    return 0;
}