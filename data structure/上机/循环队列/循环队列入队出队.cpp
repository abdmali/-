//ѭ��������ӳ���
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//ѭ�����еĽṹ���Ͷ���
const int m=5;
typedef int datatype;
typedef struct
{   datatype sequ[m];
    int  rear, quelen;
}qu;
void setnull(qu*);
void enqueue(qu*, datatype);
datatype *dequeue(qu*);

void main()
{  qu *sq;
   datatype x, *p;
   int key;
   sq=(qu*)malloc(sizeof(qu));
   setnull(sq);
   do
   {  printf("1.Enter Queue   2.Delete Queue   -1.Quit:");
      scanf("%d",&key);
      switch(key)
      {  case 1:  printf("Enter the Data:"); scanf("%d",&x);
		          enqueue(sq,x);  break;
	     case 2:  p=dequeue(sq);
		          if(p!=NULL) printf("%d\n",*p);
		          break;
	     case -1: exit(0);
      }
   }while(1);
}

//�ÿն�
void setnull(qu *sq)
{  sq->rear=m-1;
   sq->quelen=0;
}

//�������㷨








//��ӳ����㷨





