//�ֿ���ҵĳ������
#include<stdio.h>
//���Ͷ���
typedef int keytype;
typedef struct
{
	keytype key;
	int low,high;
}index;
typedef struct
{
	keytype key;
}record;
const int recN=18;
const int idxN=3;

int blksearch(record[],index[],keytype,int);
void main()
{
	record r[recN]={22,12,13,8,9,20,33,42,44,38,24,48,60,58,74,49,86,53};
	index idx[idxN]={{22,0,5},{48,6,11},{86,12,17}};
	keytype key;
	int loc,i;
	printf("�����ҵļ�¼�ؼ��ֱ�\n");
	for(i=0;i<recN;i++)
		printf("%5d",r[i]);
	printf("\n");
	printf("������Ҫ���Ҽ�¼�Ĺؼ��֣�");
	scanf("%d",&key);
	loc=blksearch(r,idx,key,idxN);
	if(loc!=-1) printf("���ҵ����ǵ�%d����¼��\n",loc+1);
	else printf("��¼���Ҳ�����\n");
}

//����۰��������������˳������㷨



