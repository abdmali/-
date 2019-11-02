//�ж϶����������ĳ������
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//��������Ľṹ���Ͷ���
const int maxsize=1024;
typedef int keytype;
typedef struct node
{
	keytype key;
	struct node *lchild,*rchild;
}bitree;

bitree*creattree();
void preorder(bitree*);
void inorder(bitree*);

void main()
{
	bitree*pb;
	pb=creattree();
	preorder(pb);
	printf("\n");
	inorder(pb);
	printf("�Ƕ�����������\n");
}

//�������Ľ���
bitree*creattree()
{
	keytype x;
	bitree*Q[maxsize];
	int front,rear;
	bitree*root,*s;
	root=NULL;
	front=1;rear=0;
	printf("�����������������������ͽ�����ݣ�0��ʾ���㣬-1��ʾ������\n");
	scanf("%d",&x);//����0��ʾ���㣬-1��ʾ����
	while(x!=-1)
	{
		s=NULL;
		if(x!=0)
		{
			s=(bitree*)malloc(sizeof(bitree));
			s->key=x;
			s->lchild=NULL;
			s->rchild=NULL;
		}
		rear++;
		Q[rear]=s;
		if(rear==1)root=s;
		else
		{
			if(s&&Q[front])
				if(rear%2==0)Q[front]->lchild=s;
				else Q[front]->rchild=s;
			if(rear%2==1)front++;
		}
		scanf("%d",&x);;
	}
	return root;
}

//�����������
void preorder(bitree*p)
{
	if(p!=NULL)
	{
		printf("%d",p->key);
		if(p->lchild!=NULL||p->rchild!=NULL)
		{
			printf("(");
			preorder(p->lchild);
			if(p->rchild!=NULL) printf(",");
			preorder(p->rchild);
			printf(")");
		}
	}
}

//����ж϶����������㷨




