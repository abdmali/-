//˫����������ĳ������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//˳���ṹ���Ͷ���
typedef int datatype;
typedef struct{
	int key;
	datatype data;
}sequenlist;

void create(sequenlist[],int);
void print(sequenlist[],int);
void dbubblesort(sequenlist[],int);

void main()
{
	const int n=10;
	sequenlist r[n+1];
	create(r,n);
	printf("����ǰ�����ݣ�");
	print(r,n);
	dbubblesort(r,n);
	printf("���������ݣ�");
	print(r,n);
}

//����˳���
void create(sequenlist r[],int n)
{
	srand(time(0));
	for(int i=1;i<=n;i++)
		r[i].key=rand()%90;
}

//���˳���
void print(sequenlist r[],int n)
{
	for(int i=1;i<=n;i++)
		printf("%5d",r[i].key);
	printf("\n");
}

//���˫�����������㷨






