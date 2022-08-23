#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
typedef struct Node* node;
node createNode(int x){
	node p=new Node;
	p->data=x;
	p->next=NULL;
	return p;
}
void addFirst(node &head,int x){
	node p=createNode(x);
	p->next=head;
	head=p;
}
void addLast(node &head,int x){
	node p=createNode(x);
	if(head==NULL)
	{
		head=p;
	}
	else{
			node last=head;
	while(last->next!=NULL)
		last=last->next;
	last->next=p;
	}

}
void addAfter(node &head,int v,int x){
	node p=createNode(x);
	node q=head;
	while(q!=NULL&&q->data!=v)
		q=q->next;
	if(q!=NULL)
	{
		p->next=q->next;
		q->next=p;
	}
}
void deleteFirst(node &head){
	node p=head;
	head=p->next;
	p->next=NULL;
	delete(p);
}
void outNode(node head)
{
	node p=head;
	while(p!=NULL)
	{
		cout<<p->data<<"\t";
		p=p->next;
	}
	cout<<endl;
}
int main()
{
	Node *head;
	addFirst(head,10);
	addFirst(head,15);
	addLast(head,100);
	addFirst(head,9);
	addLast(head,99);
	deleteFirst(head);
	outNode(head);
}





























