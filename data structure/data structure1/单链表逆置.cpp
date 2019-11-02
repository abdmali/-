//单链表逆置的程序代码
#include<malloc.h>
#include<stdio.h>
//单链表结构类型定义
typedef char datatype;
typedef struct node
{
	datatype data;
	struct node *next;
}linklist;
void create(linklist*&);
void print(linklist *);
void invert(linklist*);
int main()
{
	linklist*head;
	create(head);
	print(head);
	invert(head);//调用单链表逆置的函数
	print(head);
}

//采用尾插法建立具有头结点的单链表
void create(linklist*&head)
{
	char ch;
	linklist *s,*r;
	head=(linklist*)malloc(sizeof(linklist));
	r=head;
	while((ch=getchar())!='*')
	{
		s=(linklist*)malloc(sizeof(linklist));
		s->data=ch;
		r->next=s;
		r=s;
	}
	r->next=NULL;
}

//输出单链表
void print(linklist *head)
{
	linklist*p=head->next;
	while(p!=NULL)
	{
		printf("%2c",p->data);
		p=p->next;
	}
	printf("\n");
}

//单链表逆置
void  invert(linklist *head)
{
	linklist *p,*q;
	p=head->next;
    head->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=head->next;
		head->next=q;
	}
}