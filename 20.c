/*
��Ŀ��
��ŵ�����
*/
/*
˼·��
�������n����A��B����C
��ô
�Ƚ�����n-1�����˵�C
Ȼ�󽫵�n�����˵�B
���C�ϵ�n-1�����˵�B
�Դ�����
*/
#include<stdio.h>
#include<string.h>
void hnt(int n,char from,char to,char help)
{
	if(n==1)
	{
		printf("from %c to %c\n",from,to);
		return;
	}
	hnt(n-1,from,help,to);
	printf("from %c to %c\n",from,to);
	hnt(n-1,help,to,from);
}
void main()
{
	hnt(4,'A','B','C');
}
