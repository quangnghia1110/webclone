#include<iostream>
#include<math.h>
#include<string.h>
#define MAX 100
typedef int Type;
using namespace std;
//khai báo danh sách
struct LIST
{
	Type a[MAX];
	int n;
};
//tạo danh sách đặc
void CreateMyList(LIST &mylist){
	mylist.n=0;
}
//kiểm tra danh sách rỗng
int isEmptyList(LIST &mylist)
{
	if(mylist.n=0)
		return 1;
	return 0;
}
//kiểm tra danh sách đầy
int isFullList(LIST &mylist)
{
	if(mylist.n=0)
		return 1;
	return 0;
}
//thêm phần tử vào đầu danh sách
void addFirst(LIST &mylist,int x){
	if(isFullList(mylist))
		cout<<"-1";
	else{
		mylist.n++;
		for(int i=mylist.n;i>0;i--)
			mylist.a[i]=mylist.a[i-1];
		mylist.a[0]=x;
	}
}
//thêm phần tử vào cuối danh sách
void addLast(LIST &mylist,int x){
	if(isFullList(mylist))
		cout<<"-1";
	else{
		mylist.n++;
		mylist.a[mylist.n-1]=x;
	}
}
//thêm phần tử x vào vị trí k bất kỳ
void addRand(LIST &mylist, int x,int k){
	if(isFullList(mylist))
		cout<<"-1";
	else{
		if(k<0||k>mylist.n)
			cout<<"-1";
		else{
			mylist.n++;
			for(int i=mylist.n;i>k;i--)
				mylist.a[i]=mylist.a[i-1];
			mylist.a[k]=x;
		}
	}
}
void createList(LIST mylist)
{
	int n;
	cin>>mylist.n;
	for(int i=0;i<mylist.n;i++)
		cin>>mylist.a[i];
}
void printList(LIST mylist)
{
	for(int i=0;i<mylist.n;i++)
		cout<<mylist.a[i];
}
int main()
{
	LIST mylist;
	CreateMyList(mylist);
	createList(mylist);
	int x;
	cin>>x;
	addFirst(mylist,x);
	printList(mylist);
	
		
}
