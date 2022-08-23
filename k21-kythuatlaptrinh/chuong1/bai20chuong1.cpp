#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	FILE *fi;
	fi=fopen("D:/k21/k21-kythuatlaptrinh/SOCHAN.DAT","wt");
	if(fi==NULL)
	{
		cout<<"KHONG MO DUOC FILE \n";
		return -1;
	}
	int dem=0;
	for(int i = 1; i <= 100; i++)
    {
        if(i%2 == 0)
        {
            dem ++;
            cout<<i<<" ";
            fprintf(fi,"%d ",i);
            if(dem % 30 == 0)
            {
            	fprintf(fi,"\n",i);
                cout<<"\n";
            }
            
        }
    }
}
