#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
struct NODE{
	int data;
	struct NODE *next;
};
struct LIST{
	NODE *head;
	NODE *tail;
};
//khởi tạo danh sách
void intList(LIST &mylist){
	mylist.head=mylist.tail=NULL;
}
//kiểm tra danh sách rỗng
int isEmptyList(LIST &mylist){
	if(mylist.head==NULL)
		return 1;
	return 0;
}
//thêm một phần tử vào danh sách
NODE *createNode(int x)
{
	NODE *p=new NODE;
	if(p==NULL){
		cout<<"khong du bo nho";
		return NULL;
	}
	p->data=x;
	p->next=NULL;
	return p;
}
//thêm phần tử vào đầu danh sách
void addFirst(LIST mylist, NODE *p)
{
	if(isEmptyList(mylist))
		mylist.head=mylist.tail=p;
	else{
		p->next=mylist.head;
		mylist.head=p;
	}
}
//thêm phần tử vào cuối danh sách
void addLast(LIST mylist, NODE *p)
{
	if(isEmptyList(mylist))
		mylist.head=mylist.tail=p;
	else{
		mylist.tail->next=p;
		mylist.head=p;
	}
}
//thêm phần tử sau phần tử q vào danh sách
void addNode(LIST mylist, NODE *p,NODE *q)
{
	p->next=q->next;
	q->next=p;
	if(mylist.tail!=q)
		mylist.tail=p;
}
//hủy phần tử đầu ra danh sách
void removeFirst(LIST &mylist)
{
	if(isEmptyList(mylist))
		cout<<"danh sach rong";
	else{
		NODE *p=mylist.head;
		if(mylist.head==mylist.tail)
			mylist.head=mylist.tail=NULL;
		else
			mylist.head=mylist.head->next;
		delete p;
	}
}
//hủy phần tử cuối ra danh sách
void removeLast(LIST &mylist)
{
	if(isEmptyList(mylist))
		cout<<"danh sach rong";
	else{
		NODE *q=mylist.tail;
		if(mylist.head==mylist.tail)
			mylist.head=mylist.tail=NULL;
		else
		{
			NODE *p;
			for(p=mylist.head;p->next!=mylist.tail;p=p->next);
			p->next=NULL;
			mylist.tail=p;
			
		}
		delete q;
	}
}
//hủy phần tử sau phần tử q ra danh sách
void removeNode(LIST &mylist, NODE *q)
{
	NODE *p=q->next;
	if(p==NULL)
		cout<<"khong ton tai phan tu sau q";
	else{
		q->next=p->next;
		if(p==mylist.tail)
			mylist.tail=q;
		delete p;
	}
}
//tìm kiếm một phần tử trên danh sách
int searchNode(LIST mylist,int x)
{
	NODE *p=mylist.head;
	while(p!=NULL)
	{
		if(p->data==x)
			return 1;
	}
	return 0;
}
//in nội dung
void printList(LIST mylist)
{
	for(NODE *p=mylist.head;p!=NULL;p=p->next)
		cout<<p->data<<" ";
}
int main()
{
	LIST *mylist;
	
	
	addFirst(mylist,10);
	addFirst(mylist,5);
	addFirst(mylist,p3);
	addFirst(mylist,p4);
	addFirst(mylist,p5);
	printList(mylist);
	
	addLast(mylist,p6);
	addLast(mylist,p7);
	addLast(mylist,p8);
	addLast(mylist,p9);
	addLast(mylist,p10);
	printList(mylist);	
	
	removeFirst(mylist);
	printList(mylist);
	
	removeLast(mylist);
	printList(mylist);
	
	
	
	
}
