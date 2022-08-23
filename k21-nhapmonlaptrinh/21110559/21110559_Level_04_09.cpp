#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Nhap vao n: ");scanf("%d", &n);     
    bool CheckGiamDan = true;
    int themang = n;
    int ChuSoCuoi = themang % 10; 
    themang /= 10;
    while(themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoCuoi < ChuSoKeCuoi)
        {
            CheckTangDan = false;
            break;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;  
        }
    }
    if(CheckGiamDan)
        printf("Day la day so giam dan");
    else
        printf("Day la day so khong giam dan");
    
    return 0;
}
