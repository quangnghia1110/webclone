#include<stdio.h>
#include<math.h>


int scp(int n) {
    int a = sqrt(n);
    if (a * a == n) {
        return n;
    }
    else return 0;
}

int timkiem(int n, int arr[]) {
    int max;
    for (int i = 0; i < n; i++) {
        if (arr[i] = scp(arr[i])) {
           max = arr[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (scp(arr[i]) > max) {
            max = scp(arr[i]);
        }
    }
    return max;
}





int main()
{
    int n;
    int arr[1000];
    printf("n");
    for (int i = 0; i < n; ++i) {
        printf("arr[i]");
    }
    scanf("timkiem(n, arr)");
    
    return 0;
}